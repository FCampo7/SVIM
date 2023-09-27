#ifndef GRAFICADOR_H
#define GRAFICADOR_H

#include <QtOpenGLWidgets/QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QEvent>
#include <QMouseEvent>
#include "imagen.h"

/**
 * @brief Clase que representa un graficador utilizando OpenGL para mostrar una imagen.
 *
 * Esta clase hereda de QOpenGLWidget y utiliza OpenGL para mostrar una imagen y permitir interacción con ella.
 */
class Graficador : public QOpenGLWidget, protected QOpenGLFunctions {
    Q_OBJECT

private:
    bool estado;        ///< Estado del graficador
    Imagen *imagraf;    ///< Puntero a la imagen que se mostrará
    int x;              ///< Posición en el eje X
    int y;              ///< Posición en el eje Y
    float propancho;    ///< Proporción del ancho
    float propalto;     ///< Proporción del alto

public:
    /**
     * @brief Constructor de la clase Graficador.
     *
     * @param parent Puntero al widget padre.
     */
    explicit Graficador(QWidget *parent = 0);

    /**
     * @brief Método para recibir la imagen a mostrar en el graficador.
     *
     * @param ima Puntero a la imagen a mostrar.
     */
    void recibir_imagen(Imagen *ima);

    /**
     * @brief Obtiene la posición en el eje X.
     *
     * @return Posición en el eje X.
     */
    unsigned int verx();

    /**
     * @brief Obtiene la posición en el eje Y.
     *
     * @return Posición en el eje Y.
     */
    unsigned int very();

    /**
     * @brief Destructor de la clase Graficador.
     */
    ~Graficador();

signals:
    /**
     * @brief Señal emitida cuando se hace clic en el graficador.
     */
    void clicked();

protected:
    /**
     * @brief Manejador de evento para el clic del mouse.
     *
     * @param e Evento del mouse.
     */
    void mousePressEvent(QMouseEvent *e) Q_DECL_OVERRIDE;

    /**
     * @brief Inicializa el contexto OpenGL.
     */
    void initializeGL() Q_DECL_OVERRIDE;

    /**
     * @brief Maneja el evento de cambio de tamaño del widget.
     *
     * @param width Ancho del widget.
     * @param height Alto del widget.
     */
    void resizeGL(int width, int height) Q_DECL_OVERRIDE;

    /**
     * @brief Método para pintar en el widget OpenGL.
     */
    void paintGL() Q_DECL_OVERRIDE;
};

#endif  // GRAFICADOR_H
