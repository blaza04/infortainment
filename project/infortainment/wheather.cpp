#include "wheather.h"


wheather::wheather(QObject *parent)
    : QObject{parent}
{
    latitude = 8.544379 ;
    longitude = 76.880054;
    timer = new QTimer(this);
    connect(timer,&QTimer::timeout , this ,&wheather::fetch);
    timer->start(20000);
    fetch();
}
wheather::~wheather()
{
    if(timer)
    {
        delete timer;
        timer=nullptr;
    }
}


void wheather::fetch()
{
    QNetworkAccessManager *networkManager = new QNetworkAccessManager(this);
    QUrl url(QString("http://api.weatherapi.com/v1/current.json?key=ddcd56c37ab74ac1af4121157252701&q=8.544379,76.880054"));
    connect(networkManager, &QNetworkAccessManager::finished, this, &wheather::weatherReplyFinished);
    networkManager->get(QNetworkRequest(url));

}
void wheather::weatherReplyFinished(QNetworkReply *reply)
{

    QString location = "Unavailable";
    double temperature;
    QString condition = "Unavailable";
    QString Iconname = "Unavailable";

    double windspeed  ;
    double feelslike;
    if (reply->error() == QNetworkReply::NoError) {
        qInfo()<<"fetch";
        QByteArray jsonData = reply->readAll();
        QJsonDocument doc = QJsonDocument::fromJson(jsonData);
        QJsonObject obj = doc.object();
        location = obj["location"].toObject()["name"].toString()+", "+obj["location"].toObject()["region"].toString();
        temperature =obj["current"].toObject()["temp_c"].toDouble();
        condition = obj["current"].toObject()["condition"].toObject()["text"].toString();
        windspeed = obj["current"].toObject()["wind_kph"].toDouble();
        feelslike = obj["current"].toObject()["feelslike_c"].toDouble();
        QString Ic = obj["current"].toObject()["condition"].toObject()["icon"].toString();
        setTemperature(QString::number(temperature));
        setFeelslike(QString::number(feelslike));
        setLocation(location);
        setCondition(condition);
        Iconname = Ic.section('/',-3);
        setIcon(Iconname);
        qInfo()<<location<<temperature<<windspeed<<condition<<feelslike<<Iconname;
        reply->deleteLater();
    } else {
        qWarning() << "Error fetching :" << reply->errorString();
    }
}

QString wheather::Location() const
{
    return m_Location;
}

void wheather::setLocation(const QString &newLocation)
{
    if (m_Location == newLocation)
        return;
    m_Location = newLocation;
    emit LocationChanged();
}

QString wheather::Temperature() const
{
    return m_Temperature;
}

void wheather::setTemperature(const QString &newTemperature)
{
    if (m_Temperature == newTemperature)
        return;
    m_Temperature = newTemperature;
    emit TemperatureChanged();
}



QString wheather::Feelslike() const
{
    return m_Feelslike;
}

void wheather::setFeelslike(const QString &newFeelslike)
{
    if (m_Feelslike == newFeelslike)
        return;
    m_Feelslike = newFeelslike;
    emit FeelslikeChanged();
}

QString wheather::Condition() const
{
    return m_Condition;
}

void wheather::setCondition(const QString &newCondition)
{
    if (m_Condition == newCondition)
        return;
    m_Condition = newCondition;
    emit ConditionChanged();
}

QString wheather::Icon() const
{
    return m_Icon;
}

void wheather::setIcon(const QString &newIcon)
{
    if (m_Icon == newIcon)
        return;
    m_Icon = newIcon;
    emit IconChanged();
}
