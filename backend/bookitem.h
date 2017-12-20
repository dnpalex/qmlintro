#ifndef BOOKITEM_H
#define BOOKITEM_H

#include <QString>
#include <QIcon>

#include "supportedformatsenum.h"
#include "supportedsourcesenum.h"

struct BookItem
{
    SupportedFormats format;
    QString url;
    SupportedSources source;
    QIcon preview;

    bool operator == (const BookItem& other) { return other.format == this->format &&
                other.url == this->url &&
                other.source == this->source; }
};

#endif // BOOKITEM_H
