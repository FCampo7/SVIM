#ifndef FORMATOMIF_H
#define FORMATOMIF_H

#include <fstream>
#include <iostream>
#include <string>
#include <QString>
#include <QStringList>
#include <QRegularExpression>
#include "imagen.h"
#include "archivo.cpp"

class Formatomif : public archivo{
public:
    Formatomif(){}
    void guardar(std::string nombrenuevo, Imagen img);
    void cargar(std::string nombrenuevo, Imagen &img);
    ~Formatomif(){}
};

#endif
