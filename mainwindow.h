#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "clases/sistema.h"

namespace Ui {
class MainWindow;
}

/**
 * @brief Clase que representa la ventana principal de la aplicación.
 *
 * Esta clase hereda de QMainWindow y proporciona la interfaz gráfica de la aplicación para interactuar con imágenes.
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief Constructor de la clase MainWindow.
     *
     * @param parent Puntero al widget padre.
     */
    explicit MainWindow(QWidget *parent = 0);

    /**
     * @brief Destructor de la clase MainWindow.
     */
    ~MainWindow();

private slots:
    /**
     * @brief Slot para el botón "Cargar Imagen".
     */
    void on_CargarImagen_clicked();

    /**
     * @brief Slot para el botón "Guardar Imagen".
     */
    void on_GuardarImagen_clicked();

    /**
     * @brief Slot para el botón "Aplicar Filtro".
     */
    void on_AplicarFiltro_clicked();

    /**
     * @brief Slot para el botón "Aplicar Detector".
     */
    void on_AplicarDetector_clicked();

    /**
     * @brief Slot para el cambio en el contenido del campo de texto "Metadatos".
     */
    void on_Met_textChanged();

private:
    bool click;            ///< Indicador de clic.
    Imagen ima;            ///< Imagen asociada a la ventana.
    Sistema sis;           ///< Sistema utilizado en la ventana.
    Ui::MainWindow *ui;    ///< Interfaz de usuario de la ventana.
};

#endif // MAINWINDOW_H
