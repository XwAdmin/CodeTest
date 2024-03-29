//#include <QtGui/QApplication>
#include <QApplication>
#include "frmmain.h"

#include <QTextCodec>
#include <QDesktopWidget>
#include <QStyleFactory>
#include <QStyle>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //支持中文编码
    QTextCodec *codec=QTextCodec::codecForLocale();
    QTextCodec::setCodecForLocale(codec);
//    QTextCodec::setCodecForCStrings(codec);
//    QTextCodec::setCodecForTr(codec);

    //窗体居中显示
    QDesktopWidget *desktop=QApplication::desktop();
    int width=desktop->width();
    int height=desktop->height();

    frmMain w;
    //设置窗口没有最大化按钮
    w.setWindowFlags(Qt::WindowMinimizeButtonHint);
    w.move((width-w.width())/2,(height-w.height())/2);
    w.setFixedSize(w.width(),w.height());
    w.show();
    //应用样式
    QApplication::setStyle(QStyleFactory::create("Plastique"));
    QApplication::setPalette(QApplication::style()->standardPalette());

    return a.exec();
}
