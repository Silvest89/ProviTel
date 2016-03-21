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

    //channelList.append("TheCitadel");
    channelList.append("4THINTEL");
    //channelList.append("North Provi Intel");

    QTimer::singleShot(1500, this, SLOT(getLatestIntelChannels()));
    firstShown = false;
    connect(this->ui->dockWidget, SIGNAL(topLevelChanged(bool)), this, SLOT(mapUndock(bool)));
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
        if(channelList.isEmpty())
            break;
    }
}

void ProviTel::processIntel(QString channelName, QString intelMessage)
{
    //ProviMap *proviMap = this->findChild<ProviMap *>(QString(), Qt::FindChildrenRecursively);
    //std::vector<Planets*> planets = proviMap->getPlanets();

    QList<Planets*> planetList = this->findChildren<Planets *>(QString(), Qt::FindChildrenRecursively);

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

    //IntelMessages *intelMessages = this->findChild<IntelMessages *>(QString(), Qt::FindChildrenRecursively);
    //Intel *intel = new Intel(intelMessages, "", reporterName.trimmed(), dateTime.trimmed(), intelMessage.trimmed(), channelName);
    //intelMessages->addIntel(intel);

    QList<Planets*>::iterator i;
    for (i = planetList.begin(); i != planetList.end(); ++i)
    {
        Planets *planet = (Planets*)(*i);
        planet->checkKeywords(intelMessage);
    }
}

void ProviTel::showEvent(QShowEvent * event){
    if(!firstShown){
        firstShown = true;
    }
}

void ProviTel::mapUndock(bool topLevel){
    if(topLevel){
        this->ui->proviMap->setMinimumSize(500, 500);
        this->ui->dockWidget->setMinimumSize(500, 500);
    }
    else{
        this->ui->dockWidget->setMinimumHeight(847);
        //this->ui->proviMap->setMinimumSize(1100, 825);
        //this->ui->dockWidget->setMinimumSize(1100, 847);
    }
}

