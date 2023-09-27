#ifndef FILTROCOLOR_H
#define FILTROCOLOR_H

#include "procesador.cpp"
#include "imagen.h"

/**
 * @brief Clase que representa un filtro de color para una imagen.
 *
 * Esta clase hereda de la clase 'Procesador' e implementa métodos para aplicar
 * un filtro de color a una imagen.
 */
class FiltroColor : public Procesador {
private:
    Pixel p;  ///< Píxel que representa el color del filtro

public:
    /**
     * @brief Constructor de la clase FiltroColor.
     *
     * @param p1 Píxel que representa el color del filtro.
     */
    FiltroColor(Pixel p1);

    /**
     * @brief Método para aplicar el filtro de color a una imagen.
     *
     * @param ima Referencia a la imagen a la que se debe aplicar el filtro de color.
     */
    void procesar(Imagen &ima);

    /**
     * @brief Destructor de la clase FiltroColor.
     */
    ~FiltroColor() {}
};

#endif  // FILTROCOLOR_H
