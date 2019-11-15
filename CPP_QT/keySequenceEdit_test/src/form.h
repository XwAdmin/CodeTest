#ifndef FORM_H
#define FORM_H

#include <QWidget>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = 0);
    ~Form();
    bool eventFilter(QObject *watched, QEvent *event);

private:
    Ui::Form *ui;

private slots:
    void toTest();
    void SequenceChanged(QKeySequence test);
};

#endif // FORM_H
