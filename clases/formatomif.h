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

/**
 * @brief Clase que representa un formato de archivo específico (Formatomif).
 *
 * Esta clase hereda de la clase 'archivo' e implementa los métodos para
 * guardar y cargar una imagen en el formato MIF (Memory Initialization File).
 */
class Formatomif : public archivo {
public:
    /**
     * @brief Constructor por defecto de la clase Formatomif.
     */
    Formatomif() {}

    /**
     * @brief Guarda una imagen en el formato MIF (Memory Initialization File).
     *
     * @param nombrenuevo Nuevo nombre del archivo donde se guardará la imagen.
     * @param img Referencia a la imagen que se debe guardar en el formato MIF.
     */
    void guardar(std::string nombrenuevo, Imagen &img) override;

    /**
     * @brief Carga una imagen desde un archivo en formato MIF.
     *
     * @param nombrenuevo Nombre del archivo desde el cual cargar la imagen.
     * @param img Referencia a la imagen donde se cargará la imagen desde el formato MIF.
     */
    void cargar(std::string nombrenuevo, Imagen &img) override;

    /**
     * @brief Destructor de la clase Formatomif.
     */
    ~Formatomif() {}
};

#endif // FORMATOMIF_H
