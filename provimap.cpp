#include <QWidget>
#include <QPainter>
#include <QPoint>

#include <iostream>

#include "provimap.h"
#include "planets.h"
#include <QDebug>
#include <QTimer>
#include <QStyleOption>
#include <QFile>
#include <QStandardPaths>
#include <QFileSystemWatcher>
#include <QDir>
#include <QListIterator>
#include <QRegExp>

ProviMap::ProviMap(QWidget *parent)
    : QWidget(parent)
{
    //QTimer *timer = new QTimer(this);
    //connect(timer, SIGNAL(timeout()), this, SLOT(readIntel()));
    //timer->start();
    //QTimer::singleShot(2000, this, SLOT(readIntel()));
}

void ProviMap::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e);
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
    QVector<QPoint> lineDraw;
    lineDraw << QPoint (40, 45) << QPoint(320, 45); //LF/F-Y
    lineDraw << QPoint (40, 45) << QPoint(40, 265); //LF/K1
    lineDraw << QPoint (320, 45) << QPoint(450, 45); //F-Y/8P9
    lineDraw << QPoint (320, 45) << QPoint(320, 135); //F-Y/3D
    lineDraw << QPoint (450, 45) << QPoint(580, 65); //8P9/3G

    QPen pen;  // creates a default pen

    pen.setStyle(Qt::SolidLine);
    pen.setWidth(1.5);
    pen.setBrush(Qt::black);
    pen.setCapStyle(Qt::RoundCap);
    pen.setJoinStyle(Qt::RoundJoin);

    p.setPen(pen);

    p.drawLines(lineDraw);
}

void ProviMap::updatePlanet(){
    //update();
    qDebug() << "test";
}

void ProviMap::addPlanet(Planets &planet){
    planetVect.push_back(&planet);
}

void ProviMap::readIntel()
{
    qDebug() << "Reading file";

    const QString documentsFolder = QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation);
    qDebug() << documentsFolder;
    QFile inputFile(documentsFolder + "/EVE/logs/Chatlogs/TheCitadel_20160316_114536.txt");
    if (inputFile.open(QIODevice::ReadOnly))
    {
        QTextStream in(&inputFile);
        while (!in.atEnd())
        {
            QString line = in.readLine();
            std::string test = line.toStdString();

            qDebug() << test.c_str();
        }
        inputFile.close();
    }
}

std::vector<Planets*> ProviMap::getPlanets()
{
    return planetVect;
}
