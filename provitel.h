#ifndef PROVITEL_H
#define PROVITEL_H

#include <QMainWindow>
#include <QFileSystemWatcher>
#include <QList>

#include "channelintel.h"

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
    QList<ChannelIntel*> intelChannelList;

private slots:
    void getLatestIntelChannels();
    void processIntel(QString channelName, QString intel);

private:
    Ui::ProviTel *ui;

};

#endif // PROVITEL_H
