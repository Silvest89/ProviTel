#include "channelintel.h"
#include "provitel.h"

#include <QDebug>

ChannelIntel::ChannelIntel(ProviTel *parent)
{
    proviTel = parent;
    qDebug() << "parent";
}
