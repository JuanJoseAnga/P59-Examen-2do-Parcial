#ifndef CALCULADORAIMC_H
#define CALCULADORAIMC_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class CalculadoraImc; }
QT_END_NAMESPACE

class CalculadoraImc : public QMainWindow
{
    Q_OBJECT

public:
    CalculadoraImc(QWidget *parent = nullptr);
    ~CalculadoraImc();

private:
    Ui::CalculadoraImc *ui;
};
#endif // CALCULADORAIMC_H
