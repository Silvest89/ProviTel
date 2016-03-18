#ifndef INTELMESSAGES_H
#define INTELMESSAGES_H

#include <QTableWidget>

class IntelMessages : public QTableWidget
{
public:
    IntelMessages(QWidget *parent = 0);

    void addIntel(QString channelName, QString dateTime, QString name, QString message);
};

#endif // INTELMESSAGES_H
