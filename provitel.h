#ifndef PROVITEL_H
#define PROVITEL_H

#include <QMainWindow>

namespace Ui {
class ProviTel;
}

class ProviTel : public QMainWindow
{
    Q_OBJECT

public:
    explicit ProviTel(QWidget *parent = 0);
    ~ProviTel();

private:
    Ui::ProviTel *ui;
};

#endif // PROVITEL_H
