#include "calculadoraimc.h"
#include "ui_calculadoraimc.h"

CalculadoraImc::CalculadoraImc(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CalculadoraImc)
{
    ui->setupUi(this);
}

CalculadoraImc::~CalculadoraImc()
{
    delete ui;
}
void CalculadoraImc::on_pushButton_released()
{
    datos();
}
void CalculadoraImc::datos()
{
    QString peso = QString::number (ui->inPeso->value(), 'f', 2);
    float altura=ui->inAltura->value();
    QString fecha=ui->inFecha->text();
    m_datos.append(new Calculadora(peso,altura,fecha));

}





