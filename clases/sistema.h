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

/**
 * @brief Clase que representa un sistema para trabajar con imágenes.
 *
 * Esta clase integra diversas funcionalidades para cargar, guardar, manipular y visualizar imágenes.
 */
class Sistema {
private:
    Imagen img;              ///< Imagen en el sistema.
    Graficador graf;         ///< Graficador asociado al sistema.
    archivo *arch;           ///< Puntero a un archivo utilizado en el sistema.
    Procesador *proc;        ///< Puntero a un procesador utilizado en el sistema.

public:
    /**
     * @brief Constructor de la clase Sistema.
     */
    Sistema();

    /**
     * @brief Método para cargar una imagen en el sistema.
     *
     * @param nombre Nombre del archivo de la imagen a cargar.
     */
    void CargarImagen(std::string nombre);

    /**
     * @brief Método para guardar la imagen actual del sistema.
     *
     * @param nombre Nombre del archivo para guardar la imagen.
     */
    void GuardarImagen(std::string nombre);

    /**
     * @brief Obtiene la posición X en la imagen.
     *
     * @return Posición X en la imagen.
     */
    int VerPosX();

    /**
     * @brief Obtiene la posición Y en la imagen.
     *
     * @return Posición Y en la imagen.
     */
    int VerPosY();

    /**
     * @brief Obtiene el píxel en una posición específica de la imagen.
     *
     * @param posx Posición en el eje X.
     * @param posy Posición en el eje Y.
     * @return Píxel en la posición especificada.
     */
    Pixel VerPixel(unsigned posx, unsigned posy);

    /**
     * @brief Obtiene la imagen actual del sistema.
     *
     * @return La imagen actual del sistema.
     */
    Imagen DevolverImg();

    /**
     * @brief Recibe una imagen y la establece como la imagen actual del sistema.
     *
     * @param ima Imagen a recibir.
     */
    void RecibirImagen(Imagen ima);

    /**
     * @brief Grafica la imagen actual del sistema.
     */
    void GraficarImagen();

    /**
     * @brief Grafica la imagen actual del sistema usando el graficador.
     */
    void GrafImg();

    /**
     * @brief Modifica el tamaño de la imagen.
     *
     * @param tamx Nuevo tamaño en el eje X.
     * @param tamy Nuevo tamaño en el eje Y.
     */
    void ModificarTam(unsigned tamx, unsigned tamy);

    /**
     * @brief Modifica el ancho de la imagen.
     *
     * @param ancho Nuevo ancho de la imagen.
     */
    void ModificarAncho(float ancho);

    /**
     * @brief Modifica el alto de la imagen.
     *
     * @param alto Nuevo alto de la imagen.
     */
    void ModificarAlto(float alto);

    /**
     * @brief Modifica la unidad de la imagen.
     *
     * @param unidad Nueva unidad de la imagen.
     */
    void ModificarUnidad(std::string unidad);

    /**
     * @brief Modifica los metadatos de la imagen.
     *
     * @param clave Clave del metadato a modificar.
     * @param valor Nuevo valor del metadato.
     */
    void ModificarMetadatos(std::string clave, std::string valor);

    /**
     * @brief Modifica un píxel en una posición específica de la imagen.
     *
     * @param p Píxel a modificar.
     * @param posx Posición en el eje X.
     * @param posy Posición en el eje Y.
     */
    void ModificarPixel(Pixel p, unsigned posx, unsigned posy);

    /**
     * @brief Aplica un filtro de color a la imagen.
     *
     * @param p Píxel que representa el color del filtro.
     */
    void AplicarFiltro(Pixel p);

    /**
     * @brief Detecta estructuras en la imagen.
     *
     * @param px Posición en el eje X.
     * @param py Posición en el eje Y.
     * @param p Píxel de referencia.
     */
    void Detectar(int px, int py, Pixel p);

    /**
     * @brief Obtiene información sobre el tamaño de los píxeles de la imagen.
     *
     * @return Información sobre el tamaño de los píxeles.
     */
    std::string VerTamPixeles();

    /**
     * @brief Obtiene información sobre la unidad de tamaño de la imagen.
     *
     * @return Información sobre la unidad de tamaño.
     */
    std::string VerTamUnidad();

    /**
     * @brief Obtiene los metadatos de la imagen en formato de cadena.
     *
     * @return Metadatos de la imagen en formato de cadena.
     */
    std::string VerMetadatos();
};

#endif  // SISTEMA_H
