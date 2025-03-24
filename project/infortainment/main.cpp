#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "system.h"
#include "controller.h"
#include "audio.h"
#include "wheather.h"
#include "themes.h"

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
    engine.loadFromModule("infortainment", "Main");

    QQmlContext *newcontext(engine.rootContext());

    System system;
    controller driver ;
    controller passenger ;
    audio audioctl ;
    wheather wheather;
    Themes theme;

    newcontext->setContextProperty("handle",&system);
    newcontext->setContextProperty("driver",&driver);
    newcontext->setContextProperty("passenger",&passenger);
    newcontext->setContextProperty("audiohandle",&audioctl);
    newcontext->setContextProperty("wheather",&wheather);
    newcontext->setContextProperty("Theme",&theme);
    return app.exec();
}
