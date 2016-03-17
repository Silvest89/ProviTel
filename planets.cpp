#include "provimap.h"
#include "planets.h"
#include <QDebug>
#include <QTimer>

Planets::Planets(QWidget *parent) : QPushButton(parent)
{
    this->name = "";
    this->status = CLEAR;

    ((ProviMap*)parent)->addPlanet(this);

    connect(this, SIGNAL (released()), this, SLOT (handleButton()));
}

void Planets::handleButton()
{
    qDebug() << getName();
    int value;
    value = qrand() % ((10 + 1) - 0) + 0;
    if(value < 5)
        this->setStyleSheet("QPushButton { background:rgb(255,0,0); }");
    else
        this->setStyleSheet("QPushButton { background:rgb(0,255,0); }");
    setStatus(RED);
}

void Planets::setText(const QString &text)
{
    QPushButton::setText(text);
    if(name == "")
        setName(text);
}

QString Planets::getName()
{
    return name;
}

void Planets::setName(const QString &name)
{
    this->name = name;
}

int Planets::getStatus()
{
    return status;
}

void Planets::setStatus(int status)
{
    this->status = status;

    statusSince = QDateTime::currentDateTime();

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateTimer()));
    timer->start(500);
}

void Planets::updateTimer()
{
    QString statusMessage;
    QDateTime timeSince = QDateTime::currentDateTime();
    int seconds = statusSince.secsTo(timeSince);

        statusMessage = getName() + "\nclr " + QDateTime::fromTime_t(seconds).toUTC().toString("h:mm:ss");
    this->setText(statusMessage);
}
