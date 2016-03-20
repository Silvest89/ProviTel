#ifndef PLANETS_H
#define PLANETS_H

#include <QPushButton>
#include <QDateTime>
#include "provimap.h"

enum STATUS { RED = 0 , CLEAR = 1};

class Planets : public QPushButton
{
    Q_OBJECT
public:
    Planets(QWidget *parent = 0);

    void setText(const QString &text);

    QString getName();
    int getStatus();

    void setName(const QString &name);
    void setStatus(int status);
    QDateTime statusSince;
    int minutes;
    int seconds;

    void checkKeywords(QString message);

private:    
    QString name;
    int status;

private slots:
    void handleButton();
    void updateTimer();
};


#endif // PLANETS_H
