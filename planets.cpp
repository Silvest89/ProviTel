#include "planets.h"

Planets::Planets()
{

}

Planets::Planets(std::string name, double x, double y, double width, double height){
    setName(name);
    setPlanet(x, y, width, height);
    setRed(false);
}

std::string Planets::getName(){
    return name;
}

void Planets::setName(std::string name){
    this->name = name;
}

QRectF Planets::getPlanet(){
    return this->planetShape;
}

void Planets::setPlanet(double x, double y, double width, double height){
    this->planetShape = QRectF(x, y, width, height);
}

bool Planets::isRed(){
    return this->red;
}

void Planets::setRed(bool red){
    this->red = red;
}
