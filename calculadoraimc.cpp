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

