#include "intelmessages.h"

#include <QDebug>
#include <QHeaderView>
#include <QTextEdit>
#include <QScrollBar>

IntelMessages::IntelMessages(QWidget *parent) : QTableWidget(parent)
{
    this->setColumnCount(1);
    this->setHorizontalHeaderItem(0,  new QTableWidgetItem("Intel"));
    this->horizontalHeader()->setStretchLastSection(true);

    this->verticalHeader()->hide();
    this->verticalHeader()->setDefaultSectionSize(50);
    this->verticalHeader()->sectionResizeMode(QHeaderView::Fixed);
}

void IntelMessages::addIntel(QString channelName, QString dateTime, QString name, QString message)
{
    QTextEdit *text = new QTextEdit();
    text->insertHtml("<table style=\"width:100%\"><tr><td width=\"1000px\">Pic</td>"
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
