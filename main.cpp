#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "backend/booklistmodel.h"

#include "qpdfdocument.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    BookListModel myModel{QList<BookItem>{BookItem{SupportedFormats::PDF, "c:\\someurl1"},
                                         BookItem{SupportedFormats::EBOOK, "c:\\someurl2"},
                                         BookItem{SupportedFormats::PDF, "c:\\someurl3"}}};

    QPdfDocument* doc = new QPdfDocument();

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("myModel", &myModel);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    delete doc;

    return app.exec();
}
