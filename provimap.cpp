#include <QWidget>
#include <QPainter>
#include <QPoint>

#include <iostream>

#include "provimap.h"

ProviMap::ProviMap(QWidget *parent)
    : QWidget(parent)
{
    Planets *zrfe3 = new Planets("Z-RFE3", 10.0, 20.0, 55.0, 25.0);

    planetVect.push_back(zrfe3);
}

void ProviMap::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e);
    QPen pen( Qt::black );
    pen.setWidth(2);

    QPainter painter(this);
    painter.setPen( pen );
    for (std::vector<Planets*>::iterator it = planetVect.begin() ; it != planetVect.end(); ++it){
        painter.drawRoundedRect((*it)->getPlanet(), 10, 10);
        painter.drawText((*it)->getPlanet(), Qt::AlignHCenter, (*it)->getName().c_str());
        QPen penHText(QColor("#00e0fc"));
        painter.setPen(penHText);
        if(!(*it)->isRed())
            painter.drawText((*it)->getPlanet(), Qt::AlignBottom|Qt::AlignHCenter, "clr: ");
    }

        //painter.drawRoundedRect(it, 16, 16);
    //painter.drawText(point, "Z-RFE3");
    //painter.drawRoundedRect(rectangle, 16, 16);
}

void ProviMap::updatePlanet(){
    update();
}
