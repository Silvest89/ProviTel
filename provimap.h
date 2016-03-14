#ifndef PROVIMAP_H
#define PROVIMAP_H

#include <QWidget>

#include "planets.h"
#include <vector>

class ProviMap : public QWidget
{
public:
    ProviMap(QWidget *parent = 0);

    virtual void paintEvent(QPaintEvent * event);
    void updatePlanet();

    std::vector<Planets*> planetVect;

};

#endif // PROVIMAP_H
