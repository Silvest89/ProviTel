#include "intelmessages.h"

#include <QDebug>
#include <QHeaderView>
#include <QTextEdit>
#include <QScrollBar>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrlQuery>
#include <openssl/aes.h>
#include <QDomDocument>
#include <QDomElement>

IntelMessages::IntelMessages(QWidget *parent) : QTableWidget(parent)
{
    this->setColumnCount(1);
    this->setHorizontalHeaderItem(0,  new QTableWidgetItem("Intel"));
    this->horizontalHeader()->setStretchLastSection(true);

    this->verticalHeader()->hide();
    this->verticalHeader()->setDefaultSectionSize(50);
    this->verticalHeader()->sectionResizeMode(QHeaderView::Fixed);
    manager = new QNetworkAccessManager(this);
    //getPortrait("Johnnie Ho");
}

void IntelMessages::addIntel(QString channelName, QString dateTime, QString name, QString message)
{
    getPortrait(name);

    QTextEdit *text = new QTextEdit();
    text->insertHtml("<table style=\"width:100%\"><tr><td width=\"50px\">" + idtest + "</td>"
                     "<td>"
                     "<font style=\"font-size:10px;\">" + dateTime +"</font> - "
                     "<font style=\"font-size:10px; font-weight: bold;\">" + name +"</font> - "
                     "<font style=\"font-size:10px; font-style: italic;\">" + channelName +"</font><br>"
                     "<font style=\"font-size:10px;\">" + message + "</font></td></tr>");
    text->setReadOnly(true);
    //text->setEnabled(false);
    this->insertRow(this->rowCount());
    this->setCellWidget(this->rowCount()-1, 0, text);
    //this->setItem(1, 1, new QTableWidgetItem(message));
    this->verticalScrollBar()->setSliderPosition (this->verticalScrollBar()->maximum());
}

void IntelMessages::getPortrait(QString name){
    QUrl url("https://api.eveonline.com/eve/CharacterID.xml.aspx");
    QUrlQuery query;
    query.addQueryItem("names", name);
    url.setQuery(query);

    QNetworkRequest request(url);
    //manager->get(QNetworkRequest(QUrl("http://www.google.com")));
    QNetworkReply *reply = manager->get(request);
    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(portraitReply(QNetworkReply*)));
    //manager->get(QNetworkRequest(QUrl("https://api.eveonline.com/eve/CharacterID.xml.aspx?names="+name)));

}

void IntelMessages::portraitReply(QNetworkReply *reply)
{
    QString data = reply->readAll();
    QDomDocument doc = QDomDocument();
    doc.setContent(data);
    QDomElement docElem = doc.documentElement();
    QDomElement Component=docElem.firstChild().nextSibling().firstChild().toElement();

    QDomElement Child=Component.firstChild().toElement();
    while (!Child.isNull())
    {
        qDebug() << Child.attribute("name");
        qDebug() << Child.attribute("characterID");
        Child = Child.nextSibling().toElement();
    }
}
