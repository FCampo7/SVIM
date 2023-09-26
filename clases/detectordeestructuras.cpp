#include "detectordeestructuras.h"

DetectorDeEstructuras::DetectorDeEstructuras(int px, int py, Pixel p1){
    posx=px;
    posy=py;
    p=p1;
    Cbase.ModVerde(1.0);
}

void DetectorDeEstructuras::procesar(Imagen &img){
    Pixel pixelaux;
    detectar(posx,posy,img);
    for(unsigned i=0; i<img.VerTamY(); i++){
        for(unsigned j=0;j<img.VerTamX();j++){
            if(!(img.VerPixel(j, i)==Cbase)) img.ModificarVP(pixelaux,j,i);
        }
    }
}

void DetectorDeEstructuras::detectar(int px, int py, Imagen &ima){
    if(px>=ima.VerTamX() || py>=ima.VerTamY() || px<0 || py<0 || !(ima.VerPixel(px, py)==p)){
        return;
    }
    ima.ModificarVP(Cbase,px,py);
    detectar(px, py+1, ima);
    detectar(px+1, py, ima);
    detectar(px, py-1, ima);
    detectar(px-1, py, ima);
}
