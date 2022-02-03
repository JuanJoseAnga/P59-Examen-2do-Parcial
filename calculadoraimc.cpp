/*
 * Nombre: Juan Jose Angamarca
 * Cédula: 1751065754
 * Fecha: 02/02/2022
 * Grupo 3 POO
 */
#include "calculadoraimc.h"
#include "ui_calculadoraimc.h"

CalculadoraImc::CalculadoraImc(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CalculadoraImc)
{
    ui->setupUi(this);
    clasificador();
}

CalculadoraImc::~CalculadoraImc()
{
    delete ui;
}
void CalculadoraImc::on_pushButton_released()
{
    datos();
    impresion();
    guardar();

}
void CalculadoraImc::datos()
{
    QString peso = QString::number (ui->inPeso->value(), 'f', 2);
    float altura=ui->inAltura->value();
    QString fecha=ui->inFecha->text();
    m_informacion.append(new Calculadora(peso,altura,fecha));

}

void CalculadoraImc::clasificador()
{

    QString nombre="../arhivo.txt";
    QFile archivo(nombre);
    name=nombre;
    archivo.setFileName(nombre);
    if(archivo.exists()){
        archivo.open(QIODevice::ReadOnly | QIODevice::Text);
        if(!archivo.open(QFile::ReadOnly|QFile::Text)){

            QTextStream as(&archivo);
            QString fecha;
            QString altura;
            QString peso;
            while(!as.atEnd()){
                auto ss = as.readLine();
                auto tt = ss.split(";");
                fecha=tt[0];
                altura=tt[1];
                peso=tt[2];
                m_informacion.append(new Calculadora(peso,altura.toDouble(),fecha));
            }
        }
        datos();
    }

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

void CalculadoraImc::guardar()
{
    QString data="";
    foreach(Calculadora *fi,m_informacion){
        data+=fi->getFecha()+" ; "+QString::number(fi->altura(), 'f',2)+";"+fi->peso()+"\n";
    }

    QFile archivo(name);
    if(archivo.open(QFile::WriteOnly)){
        archivo.write(data.toUtf8());
    }
    archivo.close();
}





