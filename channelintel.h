#ifndef CHANNELINTEL_H
#define CHANNELINTEL_H

#include <QObject>

class ProviTel;

class ChannelIntel : public QObject
{
    Q_OBJECT
public:
    ChannelIntel(ProviTel *parent = 0);

private:
    ProviTel* proviTel;

signals:

public slots:
};

#endif // CHANNELINTEL_H
