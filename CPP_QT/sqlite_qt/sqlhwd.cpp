#include "sqlhwd.h"

sqlHWD::sqlHWD(QWidget *parent) : QWidget(parent)
{
    this->setLayout( hbox = new QHBoxLayout );
    hbox->addWidget( table = new QTableView );

    //数据库初始化
    sqlDatabase = QSqlDatabase::addDatabase( "QSQLITE" );
    sqlDatabase.setDatabaseName( "videoInfosDB.db" );
    if( !sqlDatabase.open() )
    {
        QMessageBox::information( this, "错误", "数据库打开失败" );
        return;
    }
    //查询
    QSqlQuery query( sqlDatabase );
    QString qstr_select = "select * from VideoDatas;";
    query.prepare( qstr_select );
    if ( query.exec( ) )
    {
        while ( query.next() )
        {
            qDebug()<<query.value(1).toString();

        };
    }else
    {
        qDebug()<<query.lastError();
    }
    //数据模型
    QSqlQueryModel *sqlModel = new QSqlQueryModel;
    sqlModel->setQuery( "select * from VideoDatas;");
    table->setModel( sqlModel );
}
