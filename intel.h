#ifndef INTEL_H
#define INTEL_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QPixmap>

class IntelMessages;

class FileDownloader;

class Intel : public QObject
{
    Q_OBJECT
public:
    explicit Intel(IntelMessages *intelMessage, QString system, QString reporter, QString dateTime, QString message, QString channelName, QObject *parent = 0);

    QString getReporter();
    QString getChannelName();
    QString getMessage();
    QString getDateTime();

    void getPortrait(QString name);
    QPixmap getPortraitPixMap();    

    QString getIntelTextLayout();

private:
    QString characterId;
    QString system;
    QString reporter;
    QString dateTime;
    QString message;
    QString channelName;
    QPixmap portraitImage;

    QNetworkAccessManager *manager;
    FileDownloader *m_pImgCtrl;
    IntelMessages *intelMessage;

    static QMap<QString, QPixmap> portraitMap;
public slots:
    void portraitReply(QNetworkReply *reply);
    void loadImage();
};

#endif // INTEL_H
