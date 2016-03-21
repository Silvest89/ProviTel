#include <QWidget>
#include <QPainter>
#include <QPoint>

#include <iostream>

#include "provimap.h"
#include "system.h"
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
    lineDraw << QPoint (40, 45) << QPoint(320, 45);
    lineDraw << QPoint (40, 45) << QPoint(40, 265);
    lineDraw << QPoint(40, 45) << QPoint(100, 205);
    lineDraw << QPoint(100, 205) << QPoint(170, 315);
    lineDraw << QPoint(100, 205) << QPoint(130, 85);
    lineDraw << QPoint(40, 265) << QPoint(40, 365);
    lineDraw << QPoint(40, 265) << QPoint(170, 315);
    lineDraw << QPoint(40, 365) << QPoint(40, 475);
    lineDraw << QPoint(40, 475) << QPoint(140, 475);
    lineDraw << QPoint(40, 475) << QPoint(40, 535);
    lineDraw << QPoint(40, 475) << QPoint(140, 535);
    lineDraw << QPoint(140, 475) << QPoint(140, 535);
    lineDraw << QPoint(140, 475) << QPoint(40, 535);
    lineDraw << QPoint(40, 535) << QPoint(140, 535);
    lineDraw << QPoint(40, 535) << QPoint(50, 645);
    lineDraw << QPoint(50, 645) << QPoint(40, 755);
    lineDraw << QPoint(50, 645) << QPoint(120, 695);
    lineDraw << QPoint(120, 695) << QPoint(230, 765);
    lineDraw << QPoint(230, 765) << QPoint(130, 785);
    lineDraw << QPoint(230, 765) << QPoint(330, 775);
    lineDraw << QPoint(330, 775) << QPoint(420, 775);
    lineDraw << QPoint(420, 775) << QPoint(420, 715);
    lineDraw << QPoint(420, 715) << QPoint(330, 675);
    lineDraw << QPoint(330, 675) << QPoint(230, 675);
    lineDraw << QPoint(40, 365) << QPoint(170, 315);
    lineDraw << QPoint(170, 315) << QPoint(240, 455);
    lineDraw << QPoint (320, 45) << QPoint(450, 45);
    lineDraw << QPoint (320, 45) << QPoint(320, 135);
    lineDraw << QPoint (320, 135) << QPoint(250, 95);
    lineDraw << QPoint (320, 135) << QPoint(320, 185);
    lineDraw << QPoint (320, 185) << QPoint(320, 255);
    lineDraw << QPoint (250, 95) << QPoint(180, 135);
    lineDraw << QPoint (180, 135) << QPoint(180, 185);
    lineDraw << QPoint (180, 185) << QPoint(250, 225);
    lineDraw << QPoint (250, 225) << QPoint(320, 185);
    lineDraw << QPoint (450, 45) << QPoint(580, 65);
    lineDraw << QPoint (580, 65) << QPoint(680, 45);
    lineDraw << QPoint (680, 45) << QPoint(770, 25);
    lineDraw << QPoint (770, 25) << QPoint(860, 25);
    lineDraw << QPoint(230, 675) << QPoint(230, 605);
    lineDraw << QPoint(230, 605) << QPoint(330, 605);
    lineDraw << QPoint(330, 605) << QPoint(330, 675);
    lineDraw << QPoint(230, 605) << QPoint(150, 635);
    lineDraw << QPoint(420, 775) << QPoint(510, 765);
    lineDraw << QPoint(510, 765) << QPoint(600, 745);
    lineDraw << QPoint(600, 745) << QPoint(530, 685);
    lineDraw << QPoint(600, 745) << QPoint(670, 685);
    lineDraw << QPoint(530, 685) << QPoint(600, 625);
    lineDraw << QPoint(600, 625) << QPoint(670, 685);
    lineDraw << QPoint(600, 745) << QPoint(730, 735);

    lineDraw << QPoint(730, 735) << QPoint(730, 585);
    lineDraw << QPoint(730, 585) << QPoint(830, 595);
    lineDraw << QPoint(830, 595) << QPoint(890, 645);

    lineDraw << QPoint(890, 645) << QPoint(810, 675);
    lineDraw << QPoint(810, 675) << QPoint(890, 695);
    lineDraw << QPoint(890, 695) << QPoint(810, 725);
    lineDraw << QPoint(890, 645) << QPoint(890, 695);
    lineDraw << QPoint(890, 695) << QPoint(890, 745);
    lineDraw << QPoint(890, 745) << QPoint(890, 795);

    lineDraw << QPoint(730, 585) << QPoint(540, 555);
    lineDraw << QPoint(240, 455) << QPoint(370, 525);
    lineDraw << QPoint(330, 605) << QPoint(280, 545);
    lineDraw << QPoint(370, 525) << QPoint(540, 555);

    lineDraw << QPoint(530, 685) << QPoint(670, 685);
    lineDraw << QPoint(320, 255) << QPoint(360, 305);
    lineDraw << QPoint(360, 305) << QPoint(270, 335);
    lineDraw << QPoint(360, 305) << QPoint(400, 355);
    lineDraw << QPoint(400, 355) << QPoint(370, 405);
    lineDraw << QPoint(370, 405) << QPoint(330, 455);
    lineDraw << QPoint(330, 455) << QPoint(240, 455);
    lineDraw << QPoint(330, 455) << QPoint(450, 475);
    lineDraw << QPoint(450, 475) << QPoint(540, 465);
    lineDraw << QPoint(450, 475) << QPoint(540, 555);

    lineDraw << QPoint(320, 255) << QPoint(410, 235);
    lineDraw << QPoint(410, 235) << QPoint(450, 285);
    lineDraw << QPoint(450, 285) << QPoint(480, 335);
    lineDraw << QPoint(480, 335) << QPoint(400, 355);

    lineDraw << QPoint(410, 235) << QPoint(430, 155);
    lineDraw << QPoint(410, 235) << QPoint(490, 225);
    lineDraw << QPoint(490, 225) << QPoint(570, 215);
    lineDraw << QPoint(490, 225) << QPoint(520, 145);
    lineDraw << QPoint(570, 215) << QPoint(520, 145);
    lineDraw << QPoint(490, 225) << QPoint(430, 165);
    lineDraw << QPoint(430, 165) << QPoint(520, 145);
    lineDraw << QPoint(430, 165) << QPoint(570, 215);

    lineDraw << QPoint(480, 335) << QPoint(560, 325);
    lineDraw << QPoint(560, 325) << QPoint(600, 275);
    lineDraw << QPoint(560, 325) << QPoint(630, 365);
    lineDraw << QPoint(570, 215) << QPoint(660, 215);
    lineDraw << QPoint(660, 215) << QPoint(600, 275);
    lineDraw << QPoint(660, 215) << QPoint(620, 135);
    lineDraw << QPoint(660, 215) << QPoint(730, 165);
    lineDraw << QPoint(620, 135) << QPoint(580, 65);
    lineDraw << QPoint(660, 215) << QPoint(710, 265);
    lineDraw << QPoint(710, 265) << QPoint(780, 225);
    lineDraw << QPoint(710, 265) << QPoint(780, 305);

    lineDraw << QPoint(730, 165) << QPoint(800, 105);
    lineDraw << QPoint(730, 165) << QPoint(820, 155);

    lineDraw << QPoint(800, 105) << QPoint(890, 85);
    lineDraw << QPoint(890, 85) << QPoint(980, 65);
    lineDraw << QPoint(820, 155) << QPoint(910, 145);
    lineDraw << QPoint(910, 145) << QPoint(1010, 135);

    lineDraw << QPoint(780, 225) << QPoint(900, 225);
    lineDraw << QPoint(900, 225) << QPoint(1010, 225);

    lineDraw << QPoint(780, 305) << QPoint(850, 305);
    lineDraw << QPoint(850, 305) << QPoint(940, 305);
    lineDraw << QPoint(940, 305) << QPoint(1010, 305);

    lineDraw << QPoint(850, 305) << QPoint(810, 375);
    lineDraw << QPoint(810, 375) << QPoint(720, 375);
    lineDraw << QPoint(810, 375) << QPoint(720, 425);
    lineDraw << QPoint(810, 375) << QPoint(810, 425);
    lineDraw << QPoint(720, 375) << QPoint(720, 425);
    lineDraw << QPoint(720, 425) << QPoint(720, 475);

    lineDraw << QPoint(810, 425) << QPoint(810, 475);
    lineDraw << QPoint(810, 475) << QPoint(720, 475);

    lineDraw << QPoint(940, 305) << QPoint(940, 375);
    lineDraw << QPoint(940, 375) << QPoint(940, 435);
    lineDraw << QPoint(940, 435) << QPoint(880, 485);
    lineDraw << QPoint(940, 435) << QPoint(1000, 485);
    lineDraw << QPoint(880, 485) << QPoint(1000, 485);
    lineDraw << QPoint(940, 375) << QPoint(880, 485);
    lineDraw << QPoint(940, 375) << QPoint(1000, 485);


    QPen pen;  // creates a default pen

    pen.setStyle(Qt::SolidLine);
    pen.setWidth(1.2);
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
