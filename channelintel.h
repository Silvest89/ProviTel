#ifndef CHANNELINTEL_H
#define CHANNELINTEL_H

#include <QObject>
#include <QFileSystemWatcher>

class ProviTel;

class ChannelIntel : public QObject
{
    Q_OBJECT
public:
    ChannelIntel(ProviTel *parent = 0, QString name = "", QString file = "");

    QString getName();

    void transferIntel(QString intel);

private slots:
    void checkIntel();

private:
    ProviTel* proviTel;
    QFileSystemWatcher watcher;

    QString name;
    QString fileLocation;

    QString latestIntel;
    bool initialSetup;

signals:
    void intelFound(QString, QString);

public slots:
};

#endif // CHANNELINTEL_H
