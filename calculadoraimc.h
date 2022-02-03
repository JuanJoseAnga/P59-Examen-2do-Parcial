/*
 * Nombre: Juan Jose Angamarca
 * Cédula: 1751065754
 * Fecha: 02/02/2022
 * Grupo 3 POO
 **/

#ifndef CALCULADORAIMC_H
#define CALCULADORAIMC_H

#include <QMainWindow>
#include "calculadora.h"

#include <QFile>


QT_BEGIN_NAMESPACE
namespace Ui { class CalculadoraImc; }
QT_END_NAMESPACE

class CalculadoraImc : public QMainWindow
{
    Q_OBJECT

public:
    CalculadoraImc(QWidget *parent = nullptr);
    ~CalculadoraImc();

    void datos();
    void clasificador();

    void impresion();
    void guardar();
    QString name;
    QString almacen;

private slots:
    void on_pushButton_released();

private:
    Ui::CalculadoraImc *ui;
    QList <Calculadora*>m_informacion;

};
#endif // CALCULADORAIMC_H
