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
    std::vector<Intel*> intel_;
    model = new IntelModel(intel_);
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
