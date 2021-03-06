/*
 * Nombre: Juan Jose Angamarca
 * Cédula: 1751065754
 * Fecha: 02/02/2022
 * Grupo 3 POO
 **/
#include "calculadoraimc.h"

#include <QApplication>
#include <QTranslator>
#include <QInputDialog>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator traducion;
    // Solicitando al usuario que seleccione un idioma
    QStringList idiomas;
    idiomas << "Catalán"<< "Español";
    QString idiomaSeleccionado = QInputDialog::getItem(NULL,
                                                       "Idioma",
                                                       "Seleccione un idioma",
                                                       idiomas);
    // Dependiendo del idioma seleccionado, carga el archivo de rtaducción
    if (idiomaSeleccionado == "Catalán"){
        traducion.load(":/calculadoraimc_ca.qm");
    }
    // Si es diferente de español, se instala la traducción en TODA la aplicación
    if (idiomaSeleccionado != "Español"){
        a.installTranslator(&traducion);
    }
    CalculadoraImc w;
    w.show();
    return a.exec();
}
