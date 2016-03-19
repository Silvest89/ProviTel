#include "intelmodel.h"
#include "intel.h"

#include <QDebug>
#include <QLabel>
#include <QPixmap>

IntelModel::IntelModel(const std::vector<Intel*>& intel, QObject *parent)
    : QAbstractListModel(parent)
{
    intel_ = intel;
}

int IntelModel::rowCount(const QModelIndex &parent) const
{
    //if (!parent.isValid())
        //return 0;

    // FIXME: Implement me!
    return intel_.size();
}

QVariant IntelModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();
    if (index.row() >= intel_.size()) return QVariant();

    if (role == Qt::DisplayRole) {
        // Only returns something for the roles you support (DisplayRole is a minimum)
        // Here we assume that the "Employee" class has a "lastName" method but of course any string can be returned

        return QVariant(intel_.at(index.row())->getIntelTextLayout());
    }
    if(role == Qt::DecorationRole){
        QPixmap pixmap = intel_.at(index.row())->getPortraitPixMap();
                    return pixmap;
    }
    else {
        return QVariant();
    }
    // FIXME: Implement me!
    //return QVariant();
}

void IntelModel::addIntel(Intel* intel)
{
    beginInsertRows( QModelIndex(), 0, 0 ); //notify views and proxy models that a line will be inserted
    //m_data.prepend( somedata ); // do the modification to the model data
    intel_.push_back(intel);
    endInsertRows(); //finish insertion, notify views/models

}
