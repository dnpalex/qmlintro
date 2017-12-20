#ifndef MODELFACTORY_H
#define MODELFACTORY_H

#include <QObject>
#include <QPair>

#include "booklistmodel.h"
#include "supportedformatsenum.h"
#include "supportedsourcesenum.h"
#include "abstractsourcereader.h"

class ModelFactory : public QObject
{
    Q_OBJECT
public:
    explicit ModelFactory(QObject *parent = nullptr);

    BookListModel* createBookListModel(const QPair<SupportedSources,AbstractSourceReader>&...);

signals:

};

#endif // MODELFACTORY_H
