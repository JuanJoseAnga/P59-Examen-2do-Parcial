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
    void archivoAC();

    void impresion();

private slots:
    void on_pushButton_released();

private:
    Ui::CalculadoraImc *ui;
    QList <Calculadora*>m_informacion;

};
#endif // CALCULADORAIMC_H
