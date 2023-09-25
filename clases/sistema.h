#ifndef SISTEMA_H
#define SISTEMA_H

#include <string>
#include "clases/archivo.cpp"
#include "clases/formatomif.h"
#include "clases/imagen.h"
#include "clases/graficador.h"
#include "clases/procesador.cpp"
#include "clases/filtrocolor.h"
#include "clases/detectordeestructuras.h"

class Sistema{
private:
    Imagen img;
    Graficador graf;
    archivo *arch;
    Procesador *proc;
public:
    Sistema();
    void CargarImagen(std::string nombre);
    void GuardarImagen(std::string nombre);
    int VerPosX();
    int VerPosY();
    Pixel VerPixel(unsigned posx, unsigned posy);
    Imagen DevolverImg();
    void RecibirImagen(Imagen ima);
    void GraficarImagen();
    void GrafImg();
    void ModificarTam(unsigned tamx, unsigned tamy);
    void ModificarAncho(float ancho);
    void ModificarAlto(float alto);
    void ModificarUnidad(std::string unidad);
    void ModificarMetadatos(std::string clave, std::string valor);
    void ModificarPixel(Pixel p, unsigned posx, unsigned posy);
    void AplicarFiltro(Pixel p);
    void Detectar(int px, int py, Pixel p);
    std::string VerTamPixeles();
    std::string VerTamUnidad();
    std::string VerMetadatos();
};

#endif // SISTEMA_H
