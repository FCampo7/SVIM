#include "pixel.h"

Pixel::Pixel(){
    rojo=0;
    verde=0;
    azul=0;
}

Pixel::Pixel(float r, float v, float a){
    rojo=r;
    verde=v;
    azul=a;
}

void Pixel::ModRojo(float r){
    rojo=r;
}

void Pixel::ModVerde(float v){
    verde=v;
}

void Pixel::ModAzul(float a){
    azul=a;
}

float Pixel::VerRojo(){
    return rojo;
}

float Pixel::VerVerde(){
    return verde;
}

float Pixel::VerAzul(){
    return azul;
}

float Pixel::CalcularBrillo(){
    return ((rojo+verde+azul)/3.0);
}

bool Pixel::operator==(Pixel p){
    bool aux=false;
    if (p.rojo<=(this->rojo+0.05) && p.rojo>=(this->rojo-0.05) && p.verde<=(this->verde+0.05) && p.verde>=(this->verde-0.05) && p.azul<=(this->azul+0.05) && p.azul>=(this->azul-0.05)){
        aux=true;
    }
    return aux;
}

bool Pixel::operator!=(Pixel p){
    return !(*this==p);
}
