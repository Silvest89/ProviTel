#ifndef INTELMESSAGES_H
#define INTELMESSAGES_H

#include <QTableWidget>
#include <QNetworkAccessManager>

class IntelMessages : public QTableWidget
{
    Q_OBJECT

public:
    IntelMessages(QWidget *parent = 0);

    void addIntel(QString channelName, QString dateTime, QString name, QString message);

    void getPortrait(QString name);

    QNetworkAccessManager *manager;
    QString idtest;
signals:

private slots:
    void portraitReply(QNetworkReply *reply);
};

#endif // INTELMESSAGES_H
