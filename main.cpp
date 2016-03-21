#include "provitel.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ProviTel w;
	w.setAttribute(Qt::WA_QuitOnClose);
    w.show();

    return a.exec();
}
