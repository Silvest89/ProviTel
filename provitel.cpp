#include "provitel.h"
#include "ui_provitel.h"

ProviTel::ProviTel(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ProviTel)
{
    ui->setupUi(this);

}

ProviTel::~ProviTel()
{
    delete ui;
}
