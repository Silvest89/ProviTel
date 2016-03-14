#include "provitel.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ProviTel w;
    w.show();

    return a.exec();
}
