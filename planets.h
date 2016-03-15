#ifndef PLANETS_H
#define PLANETS_H

#include <QPushButton>
#include "provimap.h"

class Planets : public QPushButton
{
    Q_OBJECT
public:
    Planets(QWidget *parent = 0);
private slots:
    void handleButton();
};


#endif // PLANETS_H
