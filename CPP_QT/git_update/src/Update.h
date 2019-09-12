#ifndef UPDATE_H
#define UPDATE_H

#include <QWidget>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>

class Update : public QWidget
{
    Q_OBJECT
public:
    explicit Update(QWidget *parent = nullptr);

signals:

public slots:
    void getAvatarReply(QNetworkReply *reply);
};

#endif // UPDATE_H
