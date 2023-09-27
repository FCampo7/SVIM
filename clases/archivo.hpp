#ifndef ARCHIVO_H
#define ARCHIVO_H

#include "imagen.h"  // Incluye el archivo de encabezado para la clase Imagen

// Clase abstracta que define la interfaz para operaciones de archivo
class archivo {
public:
    // Constructor predeterminado
    archivo() {}

    /**
     * @brief Guarda una imagen con un nuevo nombre de archivo.
     *
     * @param nombrenuevo Nuevo nombre del archivo donde se guardará la imagen.
     * @param img Referencia a la imagen que se debe guardar.
     */
    virtual void guardar(std::string nombrenuevo, Imagen &img) = 0;

    /**
     * @brief Carga una imagen desde un archivo.
     *
     * @param nombrenuevo Nombre del archivo desde el cual cargar la imagen.
     * @param img Referencia a la imagen donde se cargará la imagen.
     */
    virtual void cargar(std::string nombrenuevo, Imagen &img) = 0;

    // Destructor virtual
    virtual ~archivo() {}
};

#endif  // Fin de la directiva de preprocesador
