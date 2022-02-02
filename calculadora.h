#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <QObject>

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
    const QString &max() const;
    void setMax(const QString &newMax);
    const QString &min() const;
    void setMin(const QString &newMin);



    float altura() const;
    void setAltura(float newAltura);
    const QString &getFecha() const;
    void setFecha(const QString &newFecha);

private:
    QString m_IMC;
    QString m_peso;
    QString m_max;
    QString m_min;
    float m_altura;
    QString m_fecha;


signals:






};

#endif // CALCULADORA_H
