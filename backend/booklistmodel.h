#ifndef BOOKLISTMODEL_H
#define BOOKLISTMODEL_H

#include <QAbstractListModel>
#include <QList>

#include "bookitem.h"

class BookListModel : public QAbstractListModel
{
    QList<BookItem> itemList;
public:

    BookListModel();
    BookListModel(QList<BookItem>&& inputList);

    bool addItem(BookItem item) noexcept;
    bool removeItem(BookItem item) noexcept;

    // QAbstractItemModel interface
public:
    int rowCount(const QModelIndex &parent) const override;
    QVariant data(const QModelIndex &index, int role) const override;
    QHash<int, QByteArray> roleNames() const override;
};

#endif // BOOKLISTMODEL_H
