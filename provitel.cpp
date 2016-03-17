#include "provitel.h"
#include "ui_provitel.h"

#include <QDebug>
#include <QTimer>
#include <QFile>
#include <QStandardPaths>
#include <QFileSystemWatcher>
#include <QDir>
#include <QListIterator>
#include <QRegExp>
#include "channelintel.h"

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

    QTimer::singleShot(4000, this, SLOT(getLatestIntelChannels()));
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
            qDebug() << ((QFileInfo)*i).baseName();
            ChannelIntel* intel = new ChannelIntel(this);
            intelChannelList.push_back(intel);
            channelList.removeOne(fileName);
        }
    }
}
