#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <QObject>
#include <QtDebug>

class Calculadora : public QObject
{
    Q_OBJECT
public:
    explicit Calculadora(QObject *parent = nullptr);
    Calculadora(const QString &peso, float altura, const QString &fecha);
    const QString &IMC() const;
    void setIMC(const QString &newIMC);
    const QString &peso() const;
    void setPeso(const QString &newPeso);




    float altura() const;
    void setAltura(float newAltura);
    const QString &getFecha() const;
    void setFecha(const QString &newFecha);

private:
    QString m_IMC;
    QString m_peso;
    float m_altura;
    QString m_fecha;


signals:


};

#endif // CALCULADORA_H
