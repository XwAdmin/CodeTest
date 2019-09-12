#include "Update.h"

Update::Update(QWidget *parent) : QWidget(parent)
{
    QString qstr_api = "https://api.github.com/repos/XwAdmin/git_test/releases/latest";

    QNetworkAccessManager *manager = new QNetworkAccessManager;
    QNetworkRequest req;
    req.setUrl( ( QUrl( qstr_api )));
    manager->get( req );
    connect( manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(getAvatarReply(QNetworkReply*)));





}

void Update::getAvatarReply(QNetworkReply *reply)
{
    QJsonDocument  qjsonDoc = QJsonDocument::fromJson( reply->readAll() );
    QJsonObject qjson_obj;
    if ( qjsonDoc.isObject() )  qjson_obj = qjsonDoc.object();
    qDebug()<<"版本号：" + qjson_obj.value("tag_name").toString();
    qDebug()<<"更新说明：" + qjson_obj.value("body").toString();
    QJsonArray  qJsonA_assets = qjson_obj.value("assets").toArray();
    QJsonObject qJsonO_assets = qJsonA_assets.at(0).toObject();
    qDebug()<<"体积：" + QString::number(qJsonO_assets.value("size").toInt()) + "Bytes";
    qDebug()<<"更新时间：" + qJsonO_assets.value("created_at").toString();
    qDebug()<<"下载次数：" + QString::number( qJsonO_assets.value("download_count").toInt() );
    qDebug()<<"下载地址：" + qJsonO_assets.value("browser_download_url").toString();



}
