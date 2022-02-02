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
    impresion();
}
void CalculadoraImc::datos()
{
    QString peso = QString::number (ui->inPeso->value(), 'f', 2);
    float altura=ui->inAltura->value();
    QString fecha=ui->inFecha->text();
    m_informacion.append(new Calculadora(peso,altura,fecha));

}

void CalculadoraImc::archivoAC()
{
    /*
    QString nombre="C:/Users/juanf/Documents/UNIVERSIDAD UPS/SEMESTRE 2/PROGRAMACION.csv";
    QFile archivo;
    QTextStream as;
    archivo.setFileName(nombre);
    archivo.open(QIODevice::ReadOnly | QIODevice::Text);
    if(!archivo.isOpen()){
        return;
    }
    QString fecha;
    QString altura;
    QString peso;

    as.setDevice(&archivo);
    */
}

void CalculadoraImc::impresion()
{
    double m_max=0;
    double m_min=3000;
    float imcUltimo = m_informacion.at(m_informacion.length()-1)->IMC().toDouble();

    foreach(Calculadora *pj,m_informacion){
        if(pj->peso().toDouble() < m_min){
            m_min=pj->peso().toDouble();
            ui->outPesomin->setText(QString::number(m_min, 'f',2));
        }
        if(pj->peso().toDouble() > m_max){
            m_max=pj->peso().toDouble();
            ui->outPesomax->setText(QString::number(m_max, 'f',2));
        }
    }
    ui->outIMC->setText(QString::number(imcUltimo, 'f',2));
}





