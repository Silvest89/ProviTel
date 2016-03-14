#ifndef PLANETS_H
#define PLANETS_H

#include <QRectF>

#include <iostream>

class Planets
{
public:
    Planets();
    Planets(std::string name, double x, double y, double width, double height);

    std::string getName();
    void setName(std::string name);

    QRectF getPlanet();
    void setPlanet(double x, double y, double width, double height);

    bool isRed();
    void setRed(bool red);

private:
    std::string name;
    QRectF planetShape;
    bool red;
};

#endif // PLANETS_H
