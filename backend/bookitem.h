#ifndef BOOKITEM_H
#define BOOKITEM_H

#include <QString>
#include <QIcon>

#include "supportedformatsenum.h"
#include "supportedsourcesenum.h"

struct BookItem
{
    enum DataRole{ FORMAT, URL, SOURCE, PREVIEW, FILENAME};

    SupportedFormats format;
    QString fileName;
    QString folderPath;
    SupportedSources source;
    QIcon preview;

    QString url() const noexcept {
        return folderPath + fileName;
    }

    bool operator == (const BookItem& other) { return other.format == this->format &&
                other.url() == this->url() &&
                other.source == this->source; }
};

#endif // BOOKITEM_H
