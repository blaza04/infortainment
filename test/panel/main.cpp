#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "wheather.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("panel", "Main");

    QQmlContext *context(engine.rootContext());

    wheather wheather;
    context->setContextProperty("wheather",&wheather);
    return app.exec();
}
