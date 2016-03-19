#ifndef INTELMODEL_H
#define INTELMODEL_H

#include <QAbstractListModel>
class Intel;

class IntelModel : public QAbstractListModel
{
    Q_OBJECT

public:
    explicit IntelModel(const std::vector<Intel*>& intel, QObject* parent = 0);

    // Basic functionality:
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    void addIntel(Intel* intel);
//std::vector<Intel*> intel_;
private:
    std::vector<Intel*> intel_;
};

#endif // INTELMODEL_H
