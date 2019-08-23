#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QFileSystemWatcher>
#include <qDebug>
#include <QDir>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = 0);
    ~Form();


private:
    Ui::Form *ui;
    QFileSystemWatcher *watcher;



private slots:
    void onChanged(QString str);
};

#endif // FORM_H
