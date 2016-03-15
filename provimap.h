#ifndef PROVIMAP_H
#define PROVIMAP_H

#include <QWidget>

#include <vector>

class Planets;
class ProviMap : public QWidget
{
public:
    ProviMap(QWidget *parent = 0);

    virtual void paintEvent(QPaintEvent * event);
    void updatePlanet();

    std::vector<Planets*> planetVect;
    void addPlanet(Planets* planet);

};

#endif // PROVIMAP_H
