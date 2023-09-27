#include "formatomif.h"

const float valpixmax=65535.0; //Valor maximo del pixel

void Formatomif::cargar(std::string nombrenuevo, Imagen &img){
    float alto, ancho;
    unsigned short rojo, verde, azul;
    int posfintex=0;
    Pixel pi;
    std::vector<Pixel> pixe;
    unsigned tamx, tamy;
    std::string metadatos, unidad, clave, valor;

    std::ifstream archi;
    archi.open(nombrenuevo.c_str());
    if (!archi.is_open()){
        std::cerr<<"No se pudo abrir el archivo."<<std::endl;
    }
    else {
        std::cerr<<"El archivo se abrio correctamente."<<std::endl;
        archi>>tamx;
        archi.ignore(1);
        archi>>tamy;
        archi.ignore(1);
        archi>>ancho;
        archi.ignore(1);
        archi>>alto;
        archi.ignore(1);
        std::getline(archi, unidad);

        img.ModificarAlto(alto);
        img.ModificarAncho(ancho);
        img.ModificarTam(tamx, tamy);
        img.ModificarUnidad(unidad);

        std::getline(archi,metadatos);

		//Separar metadatos por metodos de QString y cargarlos en memoria
		QString meta=QString::fromStdString(metadatos);
		QStringList lista=meta.split(QRegularExpression(";"));
		QStringList lista2;
		QStringList::Iterator il=lista.begin();

		for(int i=0; i<lista.size(); i++){
			lista2=il->split(QRegularExpression(":"));
			img.ModificarMetadato(lista2.first().toStdString(), lista2.last().toStdString());
			il++;
		}
		//Fin separar

        posfintex=archi.tellg();
        archi.close();

        std::fstream archi2(nombrenuevo.c_str(), std::ios::binary|std::ios::in);
        archi2.seekg(posfintex,std::ios::beg);
        while(archi2.read((char*)& rojo, sizeof(rojo)))
        {   archi2.read((char*)& verde, sizeof(verde));
            archi2.read((char*)& azul, sizeof(azul));
            pi.ModRojo((rojo/valpixmax));
            pi.ModVerde((verde/valpixmax));
            pi.ModAzul((azul/valpixmax));
            pixe.push_back(pi);
        }
        archi2.close();
        int cont=0;
        for(unsigned i=0; i<tamy; i++){
            for(unsigned j=0; j<tamx; j++){
                img.ModificarVP(pixe[cont++], j, i);
            }
        }
    }
}

void Formatomif::guardar(std::string nombrenuevo, Imagen &img){
    unsigned short rojo, verde, azul;
    Pixel pixaux;
    std::ofstream archi(nombrenuevo.c_str(), std::ios::trunc);
    archi<<img.VerTamX()<<";"<<img.VerTamY()<<";"<<img.VerAncho()<<";"<<img.VerAlto()<<";"<<img.VerUnidad()<<std::endl;
    archi<<img.GuardarMetadato()<<std::endl;
    archi.close();

    std::fstream archi2(nombrenuevo.c_str(), std::ios::binary|std::ios::out|std::ios::app);
    for(unsigned i=0; i<img.VerTamY(); i++){
        for(unsigned j=0; j<img.VerTamX(); j++){
            pixaux=img.VerPixel(j,i);
            rojo=((pixaux.VerRojo())*valpixmax);
            verde=((pixaux.VerVerde())*valpixmax);
            azul=((pixaux.VerAzul())*valpixmax);
            archi2.write((char*)& rojo, sizeof(rojo));
            archi2.write((char*)& verde, sizeof(verde));
            archi2.write((char*)& azul, sizeof(azul));
        }
    }
    archi2.close();
}
