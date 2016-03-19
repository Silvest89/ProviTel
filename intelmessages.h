#ifndef INTELMESSAGES_H
#define INTELMESSAGES_H

#include <QListView>
#include <QNetworkAccessManager>
class HTMLDelegate;
class IntelModel;
class Intel;

class IntelMessages : public QListView
{
    Q_OBJECT

public:
    IntelMessages(QWidget *parent = 0);

    HTMLDelegate *delegate;
    IntelModel *model;

    void addIntel(Intel* intel);

private:    

};

#endif // INTELMESSAGES_H
