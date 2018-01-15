#include "booklistmodel.h"

BookListModel::BookListModel()
{

}

BookListModel::BookListModel(QList<BookItem>&& inputList): itemList(inputList)
{
}

bool BookListModel::addItem(BookItem item) noexcept
{
    bool result = itemList.contains(item);
    itemList.append(item);
    return result;
}

bool BookListModel::removeItem(BookItem item) noexcept
{
    bool result = itemList.contains(item);
    itemList.removeOne(item);
    return result;
}



int BookListModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return itemList.count();
}

QVariant BookListModel::data(const QModelIndex &index, int role) const
{
    QVariant result;
    if (index.row() >= 0 && index.row() < itemList.count()) {
        const BookItem &item = itemList[index.row()];
        switch(role){
        case BookItem::DataRole::FORMAT:
            result = item.format;
            break;
        case BookItem::DataRole::SOURCE:
            result = item.source;
            break;
        case BookItem::DataRole::URL:
            result = item.url();
            break;
        case BookItem::DataRole::FILENAME:
            result = item.fileName;
            break;
        case BookItem::DataRole::PREVIEW:
            result = item.preview;
            break;
        default:
            result = QVariant();
        }
    }
    return result;
}


QHash<int, QByteArray> BookListModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[BookItem::DataRole::FORMAT] = "format";
    roles[BookItem::DataRole::SOURCE] = "source";
    roles[BookItem::DataRole::FILENAME] = "fileName";
    roles[BookItem::DataRole::URL] = "url";
    return roles;
}
