#include "calculadoraimc.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalculadoraImc w;
    w.show();
    return a.exec();
}
