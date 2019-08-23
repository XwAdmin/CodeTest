#include "form.h"
#include "ui_form.h"
#include <QDebug>
Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    connect( ui->lineEdit, SIGNAL(returnPressed()), this, SLOT(setCurrentStr()));
}

Form::~Form()
{
    delete ui;
}

void Form::setCurrentStr()
{
//    ui->listWidget->setCurrentItem( ui->listWidget->findItems(ui->lineEdit->text(),Qt::MatchContains).at(0) );
    QList<QListWidgetItem*> list = ui->listWidget->findItems(ui->lineEdit->text(),Qt::MatchContains);
    for (int n = 0;n<list.count(); ++n)
    {
        qDebug()<<list.at(n)->text();

    }
//    qDebug()<<
}
