/*
 * Nombre: Juan Jose Angamarca
 * Cédula: 1751065754
 * Fecha: 02/02/2022
 * Grupo 3 POO
 */
#include "calculadora.h"

Calculadora::Calculadora(QObject *parent) : QObject(parent)
{

}

const QString &Calculadora::IMC() const
{
    return m_IMC;
}

void Calculadora::setIMC(const QString &newIMC)
{
    m_IMC = newIMC;
}

const QString &Calculadora::peso() const
{
    return m_peso;
}

void Calculadora::setPeso(const QString &newPeso)
{
    m_peso = newPeso;
}


float Calculadora::altura() const
{
    return m_altura;
}

void Calculadora::setAltura(float newAltura)
{
    m_altura = newAltura;
}

const QString &Calculadora::getFecha() const
{
    return m_fecha;
}

void Calculadora::setFecha(const QString &newFecha)
{
    m_fecha = newFecha;
}


Calculadora::Calculadora(const QString &peso, float altura, const QString &fecha) : m_peso(peso), m_altura(altura), m_fecha(fecha)
{

    double lol=peso.toDouble();
    m_IMC=QString::number(lol/(altura*altura),'f',2);

}
