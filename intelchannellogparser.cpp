#include "intelchannellogparser.h"
#include "provitel.h"

#include <QDebug>
#include <QStandardPaths>
#include <QMessageBox>
#include <QTimer>
#include <QFile>


IntelChannelLogParser::IntelChannelLogParser(ProviTel *parent, QString name, QString file)
{
    proviTel = parent;    

    this->initialSetup = true;
    this->name = name;
    this->latestIntel = "";

    fileLocation = QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation) + "/EVE/logs/Chatlogs/" + file;

    connect(this, SIGNAL(intelFound(QString, QString)), proviTel, SLOT(processIntel(QString, QString)));
    QTimer::singleShot(1500, this, SLOT(checkIntel()));
}


QString IntelChannelLogParser::getName()
{
    return name;
}

void IntelChannelLogParser::checkIntel()
{
    QFile inputFile(fileLocation);
    if (inputFile.open(QIODevice::ReadOnly))
    {
        QTextStream in(&inputFile);
        bool newIntel = false;
        while (!in.atEnd())
        {

            QString newLine = in.readLine();
            if(in.atEnd())
            {
                if(latestIntel.compare("") == 0 || latestIntel.compare(newLine) != 0)
                {
                    latestIntel = newLine;
                    if(!initialSetup)
                    {
                        //qDebug() << getName() << " " << latestIntel.toStdString().c_str();
                        transferIntel(latestIntel.toStdString().c_str());
                    }
                }

            }
            else{
                if(newIntel)
                {
                    //latestIntel = newLine;
                    if(!initialSetup)
                    {
                        //qDebug() << getName() << " " << newLine.toStdString().c_str();
                        transferIntel(newLine.toStdString().c_str());
                    }
                }
                else if(latestIntel.compare(newLine) == 0)
                {
                    newIntel = true;
                }
            }
        }
        inputFile.close();
    }
    initialSetup = false;
    QTimer::singleShot(1500, this, SLOT(checkIntel()));
}

void IntelChannelLogParser::transferIntel(QString intel)
{
    emit intelFound(this->getName(), intel);
}
