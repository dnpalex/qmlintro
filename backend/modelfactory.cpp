#include "modelfactory.h"

ModelFactory::ModelFactory(QObject *parent) : QObject(parent)
{

}

BookListModel *ModelFactory::createBookListModel(const QPair<SupportedSources, AbstractSourceReader> &...)
{
    int count = 0;
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; ++i) {
        //auto val = va_arg(args, );
    }
    va_end(args);
    return nullptr;
}
