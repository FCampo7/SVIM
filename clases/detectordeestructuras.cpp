#include "detectordeestructuras.h"

DetectorDeEstructuras::DetectorDeEstructuras(int px, int py, Pixel p1){
    posx=px;
    posy=py;
    p=p1;
    Cbase.ModVerde(1.0);
}

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

void DetectorDeEstructuras::detectar(int px, int py, Imagen &ima){
    if((unsigned int)px==ima.VerTamX() || (unsigned int)py==ima.VerTamY() || px<0 || py<0 || !(ima.VerPixel(px,py)==p) || imaux.VerPixel(px, py)==Cbase) return;
    imaux.ModificarVP(Cbase,px,py);
    detectar(px, py+1, ima);
    detectar(px+1, py, ima);
    detectar(px-1, py, ima);
    detectar(px, py-1, ima);
}
