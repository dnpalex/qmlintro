#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "backend/booklistmodel.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    BookListModel myModel{QList<BookItem>{BookItem{SupportedFormats::PDF, "yazyka.pdf"},
                                         BookItem{SupportedFormats::PDF, "anfenger.pdf"},
                                         BookItem{SupportedFormats::PDF, "modern.pdf"},
                                         BookItem{SupportedFormats::PDF, "deutsch2013.pdf"},
                                         BookItem{SupportedFormats::PDF, "deutsch2013_fur.pdf"}}};

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("myModel", &myModel);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
