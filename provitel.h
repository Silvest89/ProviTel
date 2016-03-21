#ifndef PROVITEL_H
#define PROVITEL_H

#include <QMainWindow>
#include <QFileSystemWatcher>
#include <QList>

#include "intelchannellogparser.h"

namespace Ui {
class ProviTel;
}

class ProviTel : public QMainWindow
{
    Q_OBJECT

public:
    explicit ProviTel(QWidget *parent = 0);
    ~ProviTel();

    QList<QString> channelList;
    QList<IntelChannelLogParser*> intelChannelList;
    virtual void showEvent(QShowEvent * event);
    bool firstShown;


private slots:
    void getLatestIntelChannels();
    void processIntel(QString channelName, QString intel);
    void mapUndock(bool topLevel);

private:
    Ui::ProviTel *ui;

};

#endif // PROVITEL_H
