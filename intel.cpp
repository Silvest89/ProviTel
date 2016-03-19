#include "intel.h"
#include <QString>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrlQuery>
#include <openssl/aes.h>
#include <QDomDocument>
#include <QDomElement>
#include "filedownloader.h"
#include <QPixmap>
#include "intelmessages.h"
#include "intelmodel.h"

//QNetworkAccessManager *Intel::manager = new QNetworkAccessManager();
QMap<QString, QPixmap> Intel::portraitMap;
Intel::Intel(IntelMessages *intelMessage, QString system, QString reporter, QString dateTime, QString message, QString channelName, QObject *parent) : QObject(parent)
{
    this->intelMessage = intelMessage;
    this->channelName = channelName;
    this->system = system;
    this->reporter = reporter;
    this->dateTime = dateTime;
    this->message= message;  
    manager = new QNetworkAccessManager();

    getPortrait(reporter);
}

QString Intel::getReporter()
{
    return reporter;
}

QString Intel::getChannelName()
{
    return channelName;
}

QString Intel::getMessage()
{
    return message;
}

QString Intel::getDateTime()
{
    return dateTime;
}

void Intel::getPortrait(QString name){
    if(!manager)
        manager = new QNetworkAccessManager();

    QUrl url("https://api.eveonline.com/eve/CharacterID.xml.aspx");
    QUrlQuery query;
    query.addQueryItem("names", name);
    url.setQuery(query);

    QNetworkRequest request(url);
    manager->get(request);
    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(portraitReply(QNetworkReply*)));

}

void Intel::portraitReply(QNetworkReply *reply)
{
    QString data = reply->readAll();
    QDomDocument doc = QDomDocument();
    doc.setContent(data);
    QDomElement docElem = doc.documentElement();
    QDomElement Component=docElem.firstChild().nextSibling().firstChild().toElement();

    QDomElement Child=Component.firstChild().toElement();
    while (!Child.isNull())
    {
        if(Child.attribute("name").compare(this->getReporter()) == 0)
        {
            //qDebug() << Child.attribute("name");
            //qDebug() << Child.attribute("characterID");
            this->characterId = Child.attribute("characterID");

            if(portraitMap.contains(this->characterId))
            {
                portraitImage = portraitMap.value(this->characterId);
                intelMessage->model->layoutChanged();
            }
            else{
                QUrl imageUrl("https://image.eveonline.com/Character/" + this->characterId + "_32.jpg");
                m_pImgCtrl = new FileDownloader(imageUrl, this);

                connect(m_pImgCtrl, SIGNAL (downloaded()), this, SLOT (loadImage()));
            }
            break;
        }
        Child = Child.nextSibling().toElement();
    }
}

QString Intel::getIntelTextLayout()
{
    QString intelMessage = "<table style=\"width:100%\"><tr>"
            "<td style=\"padding:3px 8px 3px 3px;\">"
              "<font style=\"font-size:10px;\">" + getDateTime() +"</font> - "
              "<font style=\"font-size:10px; font-weight: bold;\">" + getReporter() +"</font> - "
              "<font style=\"font-size:10px; font-style: italic;\">" + getChannelName() + "</font><br>"
              "<font style=\"font-size:11px;\">" + getMessage() + "</font></td></tr>";
    return intelMessage;
}

void Intel::loadImage()
{
    portraitImage.loadFromData(m_pImgCtrl->downloadedData());
    portraitMap.insert(this->characterId, portraitImage);
    intelMessage->model->layoutChanged();
}

QPixmap Intel::getPortraitPixMap()
{
    return portraitImage;
}
