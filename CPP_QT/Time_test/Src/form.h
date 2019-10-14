#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QTime>
#include <QDateTime>
#include <QDebug>
#include <QCloseEvent>
#include <QSettings>

#define DAY_SEC 86400
namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = 0);
    ~Form();
    void closeEvent(QCloseEvent *event );

private:
    Ui::Form *ui;
    int day = 0;
    int allday = 0;
    qint64 timeDiff = 0;
    qint64 timeAllDiff = 0;
    QString label_template;
    QTime Time_sec;
    QTime Time_all_sec;
    QSettings *settings;
    QDateTime DateTime_start;
    QDateTime DateTime_end;

private slots:
    void timetime();
    void toCompote();
};

#endif // FORM_H
