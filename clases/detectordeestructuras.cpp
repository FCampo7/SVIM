#include "detectordeestructuras.h"

DetectorDeEstructuras::DetectorDeEstructuras(int px, int py, Pixel p1){
    posx=px;
    posy=py;
    p=p1;
    Cbase.ModVerde(1.0);
}

/** Detecta estructuras y las colorea de verde para su identificación
 *  @param Imagen& img Imagen a detectar
*/
void DetectorDeEstructuras::procesar(Imagen &img){
    imaux=img;
    Pixel pixelaux;
    for(unsigned i=0; i<img.VerTamY(); i++){
        for(unsigned j=0;j<img.VerTamX();j++){
            imaux.ModificarVP(pixelaux,j,i);
        }
    }
    detectar(posx,posy,img);
    img=imaux;
}

/** Detectar está dividido en mitad inferior y mitad superior, esto es para que no se produzca un overflow de la pila de ejecución del programa
 *
 * @param int px posición x del pixel
 * @param int py posición y del pixel
 * @param Imagen& img imagen original
*/
void DetectorDeEstructuras::detectar(int px, int py, Imagen &img){
    detectarDOWN(px, py, img); // Analizo la mitad inferior
    detectarUP(px, py-1, img); // Analiza la mitad superior
}

void DetectorDeEstructuras::detectarDOWN(int px, int py, Imagen &ima){
    if((unsigned)px>=ima.VerTamX() || (unsigned)py>=ima.VerTamY() || px<0 || py<0){
        return;
    }
    else if(ima.VerPixel(px, py)!=p || imaux.VerPixel(px, py)==Cbase){
        return;
    }
    imaux.ModificarVP(Cbase,px,py);
    detectarDOWN(px, py+1, ima);
    detectarDOWN(px+1, py, ima);
    detectarDOWN(px-1, py, ima);
}

void DetectorDeEstructuras::detectarUP(int px, int py, Imagen &ima){
    if((unsigned)px>=ima.VerTamX() || (unsigned)py>=ima.VerTamY() || px<0 || py<0){
        return;
    }
    else if(ima.VerPixel(px, py)!=p || imaux.VerPixel(px, py)==Cbase){
        return;
    }
    imaux.ModificarVP(Cbase,px,py);
    detectarUP(px+1, py, ima);
    detectarUP(px, py-1, ima);
    detectarUP(px-1, py, ima);
}
