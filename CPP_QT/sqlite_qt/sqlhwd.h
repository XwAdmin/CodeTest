#ifndef SQLHWD_H
#define SQLHWD_H

#include <QWidget>
#include <QMessageBox>
#include <QDebug>
#include <QHBoxLayout>

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QTableView>

class sqlHWD : public QWidget
{
    Q_OBJECT
public:
    explicit sqlHWD(QWidget *parent = nullptr);

private:
    QHBoxLayout *hbox;
    QSqlDatabase sqlDatabase;
    QTableView *table;

};

#endif // SQLHWD_H
