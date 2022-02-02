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

const QString &Calculadora::max() const
{
    return m_max;
}

void Calculadora::setMax(const QString &newMax)
{
    m_max = newMax;
}

const QString &Calculadora::min() const
{
    return m_min;
}

void Calculadora::setMin(const QString &newMin)
{
    m_min = newMin;
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
    float lol=peso.toFloat();
    m_IMC=lol/(altura*altura);
}
