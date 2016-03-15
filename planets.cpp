#include "provimap.h"
#include "planets.h"
#include <QDebug>

Planets::Planets(QWidget *parent) : QPushButton(parent)
{
    qDebug() << ((ProviMap)parent).objectName();
    ((ProviMap)parent).addPlanet(this);

    connect(this, SIGNAL (released()), this, SLOT (handleButton()));
}

void Planets::handleButton()
{
    qDebug() << this->objectName();
}
