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
#include <QModelIndex>
#include <QStandardItemModel>
#include "htmldelegate.h"
#include "intel.h"
#include "intelmodel.h"

IntelMessages::IntelMessages(QWidget *parent) : QListView(parent)
{
    model = new IntelModel();
    delegate = new HTMLDelegate();
    this->setModel(model);

    this->setItemDelegate(delegate);
    //getPortrait("Johnnie Ho");
}

void IntelMessages::addIntel(Intel* intel)
{
    this->model->addIntel(intel);
    //this->
}
