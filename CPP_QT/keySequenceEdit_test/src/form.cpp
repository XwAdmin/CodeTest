#include "form.h"
#include "ui_form.h"
#include <QDebug>

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);

    connect( ui->keySequenceEdit, SIGNAL(editingFinished()), SLOT( toTest()));
    connect( ui->keySequenceEdit, SIGNAL(keySequenceChanged(QKeySequence)), this, SLOT( SequenceChanged(QKeySequence)));
    ui->keySequenceEdit->installEventFilter(this);
}

Form::~Form()
{
    delete ui;
}

void Form::toTest()
{
    qDebug() << "editingFinished : " << ui->keySequenceEdit->keySequence().toString();

}

void Form::SequenceChanged(QKeySequence test)
{
    qDebug() << "keySequenceChanged" << test.toString();
}
bool Form::eventFilter(QObject *watched, QEvent *event)
{
    if ( watched == ui->keySequenceEdit )
    {
        if ( event->type() == QEvent::ShortcutOverride )
        {
            ui->keySequenceEdit->setKeySequence( QKeySequence( ui->keySequenceEdit->keySequence()));
        }
    }
    return QWidget::eventFilter( watched, event );
}
