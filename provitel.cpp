#include "provitel.h"
#include "ui_provitel.h"

#include <QDebug>
#include <QTimer>
#include <QFile>
#include <QDir>
#include <QListIterator>
#include <QRegExp>
#include <QStandardPaths>
#include "intelchannellogparser.h"
#include "intel.h"


ProviTel::ProviTel(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ProviTel)
{
    ui->setupUi(this);

    qDebug() << "Setting up filewatcher";

    //watcher.addPath( documentsFolder + "/EVE/logs/Chatlogs");
    //qDebug() << watcher.directories();

    // connect(&watcher,SIGNAL(fileChanged(QString)),this,SLOT(logsDirUpdated(QString)));
    //connect(&watcher, SIGNAL(directoryChanged(QString)), this, SLOT(logsDirUpdated(QString)));

    channelList.append("TheCitadel");
    channelList.append("4THINTEL");
    channelList.append("North Provi Intel");

    QTimer::singleShot(1500, this, SLOT(getLatestIntelChannels()));
}

ProviTel::~ProviTel()
{
    delete ui;
}

void ProviTel::getLatestIntelChannels()
{
    const QString documentsFolder = QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation) + "/EVE/logs/Chatlogs";

    QDir dir;
    dir.setPath(documentsFolder);
    QFileInfoList list = dir.entryInfoList(QDir::NoDotAndDotDot | QDir::Files | QDir::Dirs, QDir::Time);

    QList<QFileInfo>::iterator i;
    QString fileName;

    for (i = list.begin(); i != list.end(); ++i)
    {
        fileName = ((QFileInfo)*i).baseName();
        fileName.replace(QRegExp("\\_.*$"), "");
        if(channelList.contains(fileName))
        {            
            IntelChannelLogParser* intel = new IntelChannelLogParser(this, fileName, ((QFileInfo)*i).baseName() + ".txt");

            intelChannelList.push_back(intel);
            channelList.removeOne(fileName);
        }
    }
}

void ProviTel::processIntel(QString channelName, QString intelMessage)
{
    ProviMap *proviMap = this->findChild<ProviMap *>(QString(), Qt::FindChildrenRecursively);
    std::vector<Planets*> planets = proviMap->getPlanets();

    QRegularExpression regex("\\[(.*)\\]");
    QRegularExpressionMatch match = regex.match(intelMessage);
    QString dateTime = match.captured(1);
    //qDebug() << dateTime.trimmed();
    intelMessage.replace(QRegExp("\\[(.*)\\]"), "");

    QRegularExpression regex2("(.*)>");
    QRegularExpressionMatch match2 = regex2.match(intelMessage);

    QString reporterName = match2.captured(1);
    //qDebug() << reporterName.trimmed();

    intelMessage.replace(QRegExp("(.*)>"), "");

    //qDebug() << intelMessage.trimmed();

    IntelMessages *intelMessages = this->findChild<IntelMessages *>(QString(), Qt::FindChildrenRecursively);
    Intel *intel = new Intel(intelMessages, "", reporterName.trimmed(), dateTime.trimmed(), intelMessage.trimmed(), channelName);
    intelMessages->addIntel(intel);

    for (std::vector<Planets*>::iterator it = planets.begin() ; it != planets.end(); ++it)
    {
        Planets *planet = (Planets*)(*it);
        //qDebug() << planet->getName();
    }
}
