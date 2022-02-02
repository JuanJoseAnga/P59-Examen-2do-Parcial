#ifndef CALCULADORAIMC_H
#define CALCULADORAIMC_H

#include <QMainWindow>
#include "calculadora.h"


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

private slots:
    void on_pushButton_released();

private:
    Ui::CalculadoraImc *ui;
    QList <Calculadora*>m_datos;

};
#endif // CALCULADORAIMC_H
