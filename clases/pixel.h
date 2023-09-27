#ifndef PIXEL_H
#define PIXEL_H

/**
 * @brief Clase que representa un píxel en una imagen con componentes de color (rojo, verde, azul).
 *
 * La clase almacena las componentes de color de un píxel y proporciona métodos para modificarlas y calcular el brillo.
 */
class Pixel {
private:
    float rojo;   ///< Componente de color rojo.
    float verde;  ///< Componente de color verde.
    float azul;   ///< Componente de color azul.

public:
    /**
     * @brief Constructor por defecto de la clase Pixel.
     *
     * Inicializa el píxel con componentes de color en cero.
     */
    Pixel();

    /**
     * @brief Constructor de la clase Pixel con componentes de color proporcionadas.
     *
     * @param r Valor para la componente de color rojo.
     * @param v Valor para la componente de color verde.
     * @param a Valor para la componente de color azul.
     */
    Pixel(float r, float v, float a);

    /**
     * @brief Modifica la componente de color rojo del píxel.
     *
     * @param r Nuevo valor para la componente de color rojo.
     */
    void ModRojo(float r);

    /**
     * @brief Modifica la componente de color verde del píxel.
     *
     * @param v Nuevo valor para la componente de color verde.
     */
    void ModVerde(float v);

    /**
     * @brief Modifica la componente de color azul del píxel.
     *
     * @param a Nuevo valor para la componente de color azul.
     */
    void ModAzul(float a);

    /**
     * @brief Obtiene el valor de la componente de color rojo.
     *
     * @return Valor de la componente de color rojo.
     */
    float VerRojo();

    /**
     * @brief Obtiene el valor de la componente de color verde.
     *
     * @return Valor de la componente de color verde.
     */
    float VerVerde();

    /**
     * @brief Obtiene el valor de la componente de color azul.
     *
     * @return Valor de la componente de color azul.
     */
    float VerAzul();

    /**
     * @brief Calcula el brillo del píxel.
     *
     * @return Valor del brillo calculado.
     */
    float CalcularBrillo();

    /**
     * @brief Sobrecarga del operador de igualdad para comparar dos píxeles.
     *
     * @param p Píxel a comparar.
     * @return true si los píxeles son iguales, false en caso contrario.
     */
    bool operator==(Pixel p);

    /**
     * @brief Sobrecarga del operador de desigualdad para comparar dos píxeles.
     *
     * @param p Píxel a comparar.
     * @return true si los píxeles son diferentes, false en caso contrario.
     */
    bool operator!=(Pixel p);
};

#endif  // PIXEL_H
