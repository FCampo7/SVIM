#ifndef METADATO_H
#define METADATO_H

#include <iostream>
#include <string>
#include <map>
#include <utility>

/**
 * @brief Clase que representa un metadato asociado a una imagen.
 *
 * La clase almacena metadatos en forma de clave-valor utilizando un mapa.
 */
class Metadato {
private:
    std::map<std::string, std::string> contenido;  ///< Mapa para almacenar los metadatos

public:
    /**
     * @brief Método para cargar un metadato con su respectiva clave y valor.
     *
     * @param clave Clave del metadato.
     * @param valor Valor asociado al metadato.
     */
    void CargarMetadato(std::string clave, std::string valor);

    /**
     * @brief Obtiene la cantidad de metadatos almacenados.
     *
     * @return Cantidad de metadatos almacenados.
     */
    unsigned int TamMet();

    /**
     * @brief Vacía todos los metadatos almacenados.
     */
    void VaciarMetadato();

    /**
     * @brief Modifica el valor de un metadato existente.
     *
     * @param clave Clave del metadato a modificar.
     * @param valor Nuevo valor para el metadato.
     */
    void ModifMeta(std::string clave, std::string valor);

    /**
     * @brief Obtiene una representación de los metadatos en forma de cadena.
     *
     * @return Cadena que representa los metadatos en formato clave:valor.
     */
    std::string VerMetadatos();

    /**
     * @brief Guarda los metadatos en un formato específico y los devuelve como una cadena.
     *
     * @return Cadena que representa los metadatos guardados en un formato específico.
     */
    std::string GuardarMetadatos();
};

#endif  // METADATO_H
