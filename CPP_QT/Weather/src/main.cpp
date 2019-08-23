#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "qqpidailyweather.h"
#include "animationweather.h"
#include <QIcon>
#include "appmodel.h"
#include "qmllog4qml.h"
#include <QQmlContext>
#include <QScreen>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);
    app.setWindowIcon(QIcon(":/logo.png"));

    QCoreApplication::setOrganizationName("Chengjianxi");
    QCoreApplication::setOrganizationDomain("pressc.cn");
    QCoreApplication::setApplicationName("Weather");

    qreal refDpi = 216.;
    qreal refHeight = 1776.;
    qreal refWidth = 1080.;
    QRect rect = QGuiApplication::primaryScreen()->geometry();
    qreal height = qMax(rect.width(), rect.height());
    qreal width = qMin(rect.width(), rect.height());
    qreal dpi = QGuiApplication::primaryScreen()->logicalDotsPerInch();
 qreal dp2i = QGuiApplication::primaryScreen()->physicalDotsPerInch();
    QString d = QGuiApplication::primaryScreen()->manufacturer();
    QString d1 = QGuiApplication::primaryScreen()->name();
    QString d12 = QGuiApplication::primaryScreen()->model();

    qreal m_ratio = qMin(height/refHeight, width/refWidth);
    qreal m_ratioFont = qMin(height*refDpi/(dpi*refHeight), width*refDpi/(dpi*refWidth));

    qmlRegisterType<AppModel>("WeatherAppModel", 1, 0, "AppModel");
    qmlRegisterType<QQPIDailyWeather>("QuickPaintedItemEx", 1, 1, "DailyWeather");
    qmlRegisterType<AnimationWeather>("QuickWeatherEx", 1, 0, "AnimationWeather");

    QmlLog4Qml log4Qml;

    QQmlApplicationEngine engine;
    engine.setOfflineStoragePath(app.applicationDirPath());
    engine.rootContext()->setContextProperty("log4Qml", &log4Qml);
    engine.load(QUrl(QLatin1String("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
