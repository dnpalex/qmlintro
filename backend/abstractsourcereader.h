#ifndef ABSTRACTSOURCEREADER_H
#define ABSTRACTSOURCEREADER_H

#include <QObject>

class AbstractSourceReader : public QObject
{
    Q_OBJECT
public:

    virtual ~AbstractSourceReader();
};

#endif // ABSTRACTSOURCEREADER_H
