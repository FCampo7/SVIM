#ifndef PROCESADOR_H
#define PROCESADOR_H

#include "imagen.h"

/**
 * @brief Clase abstracta que representa un procesador de imágenes.
 *
 * Esta clase define una interfaz común para procesar imágenes.
 */
class Procesador {
public:
    /**
     * @brief Constructor por defecto de la clase Procesador.
     */
    Procesador() {}

    /**
     * @brief Método virtual puro para procesar una imagen.
     *
     * @param ima Referencia a la imagen que se debe procesar.
     */
    virtual void procesar(Imagen &ima) = 0;

    /**
     * @brief Destructor virtual de la clase Procesador.
     */
    virtual ~Procesador() {}
};

#endif  // PROCESADOR_H
