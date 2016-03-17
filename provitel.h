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

private:
    Ui::ProviTel *ui;

    QFileSystemWatcher watcher;
};

#endif // PROVITEL_H
