#ifndef IMAGEN_H
#define IMAGEN_H

#include <vector>
#include <string>
#include <utility>
#include "metadato.h"  // Incluye el archivo de encabezado para Metadato
#include "pixel.h"     // Incluye el archivo de encabezado para Pixel

/**
 * @brief Clase que representa una imagen y su metadata asociada.
 */
class Imagen {
private:
    std::vector<std::vector<Pixel>> pix;  ///< Matriz de píxeles para representar la imagen
    Metadato met;                         ///< Metadatos asociados a la imagen
    float ancho;                          ///< Ancho de la imagen
    float alto;                           ///< Alto de la imagen
    unsigned TamPX;                       ///< Tamaño en la dimensión X
    unsigned TamPY;                       ///< Tamaño en la dimensión Y
    std::string unidad;                   ///< Unidad de medida de la imagen

    /**
     * @brief Inicializa el vector de píxeles con las dimensiones especificadas.
     */
    void InicializarVector();

public:
    /**
     * @brief Constructor predeterminado de la clase Imagen.
     */
    Imagen();

    // Métodos para modificar la imagen

    /**
     * @brief Modifica el tamaño de la imagen.
     *
     * @param x Tamaño en la dimensión X.
     * @param y Tamaño en la dimensión Y.
     */
    void ModificarTam(unsigned x, unsigned y);

    /**
     * @brief Modifica un píxel en una posición específica de la imagen.
     *
     * @param pixar Píxel a modificar.
     * @param posx Posición en la dimensión X.
     * @param posy Posición en la dimensión Y.
     */
    void ModificarVP(Pixel pixar, unsigned posx, unsigned posy);

    /**
     * @brief Modifica un metadato de la imagen.
     *
     * @param p Clave del metadato.
     * @param s Valor del metadato.
     */
    void ModificarMetadato(std::string p, std::string s);

    /**
     * @brief Modifica la altura de la imagen.
     *
     * @param a Nueva altura de la imagen.
     */
    void ModificarAlto(float a);

    /**
     * @brief Modifica el ancho de la imagen.
     *
     * @param a Nuevo ancho de la imagen.
     */
    void ModificarAncho(float a);

    /**
     * @brief Modifica el tamaño en la dimensión X de la imagen.
     *
     * @param x Nuevo tamaño en la dimensión X.
     */
    void ModificarTamX(unsigned x);

    /**
     * @brief Modifica el tamaño en la dimensión Y de la imagen.
     *
     * @param y Nuevo tamaño en la dimensión Y.
     */
    void ModificarTamY(unsigned y);

    /**
     * @brief Modifica la unidad de medida de la imagen.
     *
     * @param u Nueva unidad de medida.
     */
    void ModificarUnidad(std::string u);

    // Métodos para consultar la imagen

    /**
     * @brief Obtiene un píxel en una posición específica de la imagen.
     *
     * @param posx Posición en la dimensión X.
     * @param posy Posición en la dimensión Y.
     * @return Píxel en la posición especificada.
     */
    Pixel VerPixel(unsigned posx, unsigned posy);

    /**
     * @brief Obtiene los metadatos de la imagen.
     *
     * @return Metadatos de la imagen en formato de cadena.
     */
    std::string VerMetadato();

    /**
     * @brief Obtiene la altura de la imagen.
     *
     * @return Altura de la imagen.
     */
    float VerAlto();

    /**
     * @brief Obtiene el ancho de la imagen.
     *
     * @return Ancho de la imagen.
     */
    float VerAncho();

    /**
     * @brief Obtiene el tamaño en la dimensión X de la imagen.
     *
     * @return Tamaño en la dimensión X.
     */
    unsigned VerTamX();

    /**
     * @brief Obtiene el tamaño en la dimensión Y de la imagen.
     *
     * @return Tamaño en la dimensión Y.
     */
    unsigned VerTamY();

    /**
     * @brief Obtiene la unidad de medida de la imagen.
     *
     * @return Unidad de medida de la imagen.
     */
    std::string VerUnidad();

    /**
     * @brief Método para guardar los metadatos de la imagen.
     *
     * @return Metadatos de la imagen en formato de cadena.
     */
    std::string GuardarMetadato();

    /**
     * @brief Modifica un metadato específico de la imagen.
     *
     * @param clave Clave del metadato a modificar.
     * @param valor Nuevo valor para el metadato.
     */
    void ModifMeta(std::string clave, std::string valor);

    /**
     * @brief Vacía los metadatos de la imagen.
     */
    void VaciarMetadato();
};

#endif  // Fin de la directiva de preprocesador
