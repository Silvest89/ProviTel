#include "provimap.h"
#include "system.h"
#include <QDebug>
#include <QTimer>
#include <QVariant>
#include <QLabel>

System::System(QWidget *parent) : QPushButton(parent)
{
    this->name = "";
    this->status = CLEAR;

    timer = new QTimer(this);

    connect(this, SIGNAL (released()), this, SLOT (handleButton()));
    connect(timer, SIGNAL(timeout()), this, SLOT(updateTimer()));
}

void System::handleButton()
{
    qDebug() << this->pos().x() << " " << this->pos().y();
}

void System::enterEvent(QEvent *event)
{
    setCursor(Qt::PointingHandCursor);
}

/*void Planets::leaveEvent(QEvent *event)
{
  this->QPushButton::leaveEvent(event);
}*/

void System::setText(const QString &text)
{
    QPushButton::setText(text);
    if(name == "")
        setName(text);
}

QString System::getName()
{
    return name;
}

void System::setName(const QString &name)
{
    this->name = name;
}

int System::getStatus()
{
    return status;
}

void System::setStatus(int status)
{
    this->status = status;

    if(status == RED)
        this->setStyleSheet("QPushButton { background:rgb(255,0,0); }");
    else
        this->setStyleSheet("QPushButton { background:rgb(0,255,0); }");

    statusSince = QDateTime::currentDateTime();

    if(timer->isActive())
        timer->stop();

    timer->start(500);
}

void System::updateTimer()
{
    QString statusMessage;
    QDateTime timeSince = QDateTime::currentDateTime();
    int seconds = statusSince.secsTo(timeSince);

    if(status == RED)
        statusMessage = getName() + "\n" + QDateTime::fromTime_t(seconds).toUTC().toString("h:mm:ss");
    else
        statusMessage = getName() + "\nclr" + QDateTime::fromTime_t(seconds).toUTC().toString("h:mm:ss");
    this->setText(statusMessage);
}

void System::checkKeywords(QString message)
{
    if(getKeywords().isEmpty()){
        //qDebug() << this->getName() + " empty";
        return;
    }

    QStringList keywordList = getKeywords();

    QStringListIterator keywordIterator(keywordList);
    while (keywordIterator.hasNext()){
        if(message.contains(keywordIterator.next().toLocal8Bit().constData())){
             qDebug() << keywordIterator.next().toLocal8Bit().constData();
             setStatus(RED);
             break;
        }
    }
    /*while (keywordIterator.hasNext())
    {
        //qDebug() << keywordIterator.next().toLocal8Bit().constData();
        //if(message.contains(keywordIterator.next().toLocal8Bit().constData()))
             //qDebug() << keywordIterator.next().toLocal8Bit().constData();
    }*/
}

QStringList System::getKeywords(){
    return keywordsList;
}

void System::setKeywords(QStringList keywords)
{
    keywordsList = keywords;
    //qDebug() << this->getName() << keywordsList.length();
}
