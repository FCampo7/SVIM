#ifndef ARCHIVO_H
#define ARCHIVO_H

#include "imagen.h"

class archivo{
public:
    archivo(){}
    virtual void guardar(std::string nombrenuevo, Imagen img)=0;
    virtual void cargar(std::string nombrenuevo, Imagen &img)=0;
    virtual ~archivo(){}
};

#endif
