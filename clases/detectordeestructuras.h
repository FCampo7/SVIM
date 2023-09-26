#ifndef DETECTORDEESTRUCTURAS_H
#define DETECTORDEESTRUCTURAS_H

#include "imagen.h"
#include "procesador.cpp"

class DetectorDeEstructuras : public Procesador{
private:
    void detectar(int px, int py, Imagen &ima);
    unsigned posx, posy;
    Pixel p; //pixel de referencia
    Pixel Cbase;
public:
    DetectorDeEstructuras(int px,int py,Pixel p1);
    void procesar(Imagen &img);
    ~DetectorDeEstructuras(){}
};

#endif
