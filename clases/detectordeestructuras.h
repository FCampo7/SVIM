#ifndef DETECTORDEESTRUCTURAS_H
#define DETECTORDEESTRUCTURAS_H

#include "imagen.h"
#include "procesador.cpp"

/**
 * @brief Clase que representa un detector de estructuras para una imagen.
 *
 * Esta clase hereda de la clase 'Procesador' e implementa métodos para detectar
 * estructuras en una imagen y procesarla en consecuencia.
 */
class DetectorDeEstructuras : public Procesador {
private:
    /**
     * @brief Método privado para detectar estructuras en una imagen.
     *
     * @param px Posición en el eje X para la detección.
     * @param py Posición en el eje Y para la detección.
     * @param ima Referencia a la imagen en la que se debe detectar la estructura.
     */
    void detectar(int px, int py, Imagen &ima);

    /**
     * @brief Método privado para detectar estructuras hacia abajo en una imagen.
     *
     * @param px Posición en el eje X para la detección hacia abajo.
     * @param py Posición en el eje Y para la detección hacia abajo.
     * @param ima Referencia a la imagen en la que se debe detectar la estructura hacia abajo.
     */
    void detectarDOWN(int px, int py, Imagen &ima);

    /**
     * @brief Método privado para detectar estructuras hacia arriba en una imagen.
     *
     * @param px Posición en el eje X para la detección hacia arriba.
     * @param py Posición en el eje Y para la detección hacia arriba.
     * @param ima Referencia a la imagen en la que se debe detectar la estructura hacia arriba.
     */
    void detectarUP(int px, int py, Imagen &ima);

    unsigned posx;  ///< Posición en el eje X para la detección
    unsigned posy;  ///< Posición en el eje Y para la detección
    Pixel p;  ///< Píxel de referencia
    Pixel Cbase;  ///< Píxel de referencia para la detección
    Imagen imaux;  ///< Imagen auxiliar para procesamiento

public:
    /**
     * @brief Constructor de la clase DetectorDeEstructuras.
     *
     * @param px Posición en el eje X para la detección.
     * @param py Posición en el eje Y para la detección.
     * @param p1 Píxel de referencia para la detección.
     */
    DetectorDeEstructuras(int px, int py, Pixel p1);

    /**
     * @brief Método para procesar una imagen y detectar estructuras.
     *
     * @param img Referencia a la imagen que se debe procesar y analizar.
     */
    void procesar(Imagen &img);

    /**
     * @brief Destructor de la clase DetectorDeEstructuras.
     */
    ~DetectorDeEstructuras() {}
};

#endif  // DETECTORDEESTRUCTURAS_H
