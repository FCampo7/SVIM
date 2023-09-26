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
    return pix[posy][posx];
}

std::string Imagen::VerMetadato(){
    std::string s;
    s=met.VerMetadatos();
    return s;
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

Imagen& Imagen::operator=(const Imagen& img){
    if(this != &img){
        this->TamPX=img.TamPX;
        this->TamPY=img.TamPY;
        this->ancho=img.ancho;
        this->alto=img.alto;
        this->met=img.met;
        this->unidad=img.unidad;
        this->pix.resize(TamPY);
        for(unsigned int i=0; i<TamPY; i++){
            this->pix[i].resize(TamPX);
            for(unsigned int j=0; j<TamPX; j++){
                this->pix[i][j]=img.pix[i][j];
            }
        }
    }
    return *this;
}
