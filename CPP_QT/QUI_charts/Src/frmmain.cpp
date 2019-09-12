#include "frmmain.h"
#include "ui_frmmain.h"
#include "iconhelper.h"
#include <QPropertyAnimation>
#include <QMouseEvent>
#include <QMessageBox>
#include <QDebug>
#include "windows.h"
#include "windowsx.h"
#include "frmplot.h"
#include <QVBoxLayout>

frmMain::frmMain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::frmMain)
{
    ui->setupUi(this);

    //设置窗体标题栏隐藏
    this->setWindowFlags(Qt::FramelessWindowHint);

    //安装事件监听器,让标题栏识别鼠标双击
    ui->lab_Title->installEventFilter(this);

//    IconHelper::Instance()->SetIcon(ui->btnMenu_Close, QChar(0xf00d), 10);
//    IconHelper::Instance()->SetIcon(ui->btnMenu_Max, QChar(0xf079), 10);
//    IconHelper::Instance()->SetIcon(ui->btnMenu_Min, QChar(0xf068), 10);
//    IconHelper::Instance()->SetIcon(ui->btnMenu, QChar(0xf0c9), 10);

    //渐变动画显示窗体
    QPropertyAnimation *animation = new QPropertyAnimation(this, "windowOpacity");
    animation->setDuration(1000);
    animation->setStartValue(0);
    animation->setEndValue(1);
    animation->setEasingCurve(QEasingCurve::OutCurve);
    animation->start();

    //    QPropertyAnimation *animation = new QPropertyAnimation(this, "geometry");
    //    animation->setDuration(3000);
    //    animation->setStartValue(QRect(0, 0, 800, 600));
    //    animation->setEndValue(QRect(100, 100, 800, 600));
    //    animation->setEasingCurve(QEasingCurve::OutBounce);
    //    animation->start();

    //加入曲线示例库用来演示
    frmPlot *frm=new frmPlot(ui->widget_main);
    ui->lay->addWidget(frm);
\
}

frmMain::~frmMain()
{
    delete ui;
}

bool frmMain::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::MouseButtonDblClick) {
        this->on_btnMenu_Max_clicked();
        return true;
    }
    return QObject::eventFilter(obj, event);
}

//实现鼠标拖动改变窗体大小
bool frmMain::winEvent(MSG *message, long *result)
{
    switch (message->message) {
    case WM_NCHITTEST:
        int xPos = GET_X_LPARAM(message->lParam) - this->frameGeometry().x();
        int yPos = GET_Y_LPARAM(message->lParam) - this->frameGeometry().y();

        QWidget* pt = this->childAt(xPos, yPos);
        if (pt == ui->widget_title || pt == ui->widget_menu) {
            *result = HTCAPTION;
            return true;
        } else {
            if (xPos > 1 && xPos < 6) {
                *result = HTLEFT;
            }
            if (xPos > (this->width() - 6) && xPos < (this->width() - 1)) {
                *result = HTRIGHT;
            }
            if (yPos > 1 && yPos < 6) {
                *result = HTTOP;
            }
            if (yPos > (this->height() - 6) && yPos < (this->height() - 1)) {
                *result = HTBOTTOM;
            }
            if (xPos > 1 && xPos < 6 && yPos > 1 && yPos < 6) {
                *result = HTTOPLEFT;
            }
            if (xPos > (this->width() - 6) && xPos < (this->width() - 1) && yPos > 1 && yPos < 6) {
                *result = HTTOPRIGHT;
            }
            if (xPos > 1 && xPos < 6 && yPos > (this->height() - 6) && yPos < (this->height() - 1)) {
                *result = HTBOTTOMLEFT;
            }
            if (xPos > (this->width() - 6) && xPos < (this->width() - 1) && yPos > (this->height() - 6) && yPos < (this->height() - 1)) {
                *result = HTBOTTOMRIGHT;
            }
            if (*result) {
                return true;
            }
        }
        break;
    }
    return false;
}

//实现鼠标拖动窗口移动
void frmMain::mouseMoveEvent(QMouseEvent *e)
{
    if (mousePressed && (e->buttons() && Qt::LeftButton)) {
        this->move(e->globalPos() - mousePoint);
        e->accept();
        qDebug() << "move" << e->globalPos();
    }
}

void frmMain::mousePressEvent(QMouseEvent *e)
{
    if (e->button() == Qt::LeftButton) {
        mousePressed = true;
        mousePoint = e->globalPos() - this->pos();
        e->accept();
        qDebug() << "press" << e->globalPos();
    }
}

void frmMain::mouseReleaseEvent(QMouseEvent *e)
{
    mousePressed = false;
    qDebug() << "release" << e->globalPos();
}

void frmMain::on_btnMenu_Close_clicked()
{
    qApp->exit();
}

void frmMain::on_btnMenu_Max_clicked()
{
    if (this->isMaximized()) {
        this->showNormal();
    } else {
        this->showMaximized();
    }
}

void frmMain::on_btnMenu_Min_clicked()
{
    this->showMinimized();
}
