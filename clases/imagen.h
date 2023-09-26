#ifndef IMAGEN_H
#define IMAGEN_H

#include <vector>
#include <string>
#include <utility>
#include "metadato.h"
#include "pixel.h"

class Imagen{
private:
    std::vector< std::vector<Pixel> > pix;
    Metadato met;
    float ancho, alto;
    unsigned TamPX, TamPY;
    std::string unidad;
    void InicializarVector();
public:
    Imagen();
    void ModificarTam(unsigned x, unsigned y);
    void ModificarVP(Pixel pixar, unsigned posx, unsigned posy); //modificar un pixel en particular
    void ModificarMetadato(std::string p, std::string s);
    void ModificarAlto(float a);
    void ModificarAncho(float a);
    void ModificarTamX(unsigned x);
    void ModificarTamY(unsigned y);
    void ModificarUnidad(std::string u);
    Pixel VerPixel(unsigned posx, unsigned posy);
    std::string VerMetadato();
    float VerAlto();
    float VerAncho();
    unsigned VerTamX();
    unsigned VerTamY();
    std::string VerUnidad();
    std::string GuardarMetadato();
    void ModifMeta(std::string clave, std::string valor);
    void VaciarMetadato();
    Imagen& operator=(const Imagen& img);
};

#endif
