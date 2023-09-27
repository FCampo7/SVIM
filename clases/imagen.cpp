#include "imagen.h"

Imagen::Imagen(){
    ancho=0;
    alto=0;
    TamPX=0;
    TamPY=0;
    unidad="n/s";
}

void Imagen::ModificarTam(unsigned x, unsigned y){
    TamPX=x;
    TamPY=y;
    InicializarVector();
}

void Imagen::ModificarVP(Pixel pixar, unsigned posx, unsigned posy){
    pix[posy][posx]=pixar;
}

void Imagen::ModificarMetadato(std::string p, std::string s){
    met.CargarMetadato(p, s);
}

void Imagen::ModificarAlto(float a){
    alto=a;
}

void Imagen::ModificarAncho(float a){
    ancho=a;
}

void Imagen::ModificarTamX(unsigned x){
    TamPX=x;
}

void Imagen::ModificarTamY(unsigned y){
    TamPY=y;
}

void Imagen::ModificarUnidad(std::string u){
    unidad=u;
}

Pixel Imagen::VerPixel(unsigned posx, unsigned posy){
    return this->pix[posy][posx];
}

std::string Imagen::VerMetadato(){
    return met.VerMetadatos();
}

float Imagen::VerAlto(){
    return alto;
}

float Imagen::VerAncho(){
    return ancho;
}

unsigned Imagen::VerTamX(){
    return TamPX;
}

unsigned Imagen::VerTamY(){
    return TamPY;
}

std::string Imagen::VerUnidad(){
    return unidad;
}

void Imagen::InicializarVector(){
    pix.resize(TamPY);
    for(unsigned int i=0;i<TamPY;i++){
        pix[i].resize(TamPX);
    }
}

std::string Imagen::GuardarMetadato(){
    return met.GuardarMetadatos();
}

void Imagen::ModifMeta(std::string clave, std::string valor){
    met.ModifMeta(clave, valor);
}

void Imagen::VaciarMetadato(){
    met.VaciarMetadato();
}
