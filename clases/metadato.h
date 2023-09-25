#ifndef METADATO_H
#define METADATO_H

#include <iostream>
#include <string>
#include <map>
#include <utility>

class Metadato{
private:
    std::map<std::string, std::string> contenido;
public:
    void CargarMetadato(std::string f, std::string s);
    unsigned int TamMet();
    void VaciarMetadato();
    void ModifMeta(std::string clave, std::string valor);
    std::string VerMetadatos();
    std::string GuardarMetadatos();
};

#endif
