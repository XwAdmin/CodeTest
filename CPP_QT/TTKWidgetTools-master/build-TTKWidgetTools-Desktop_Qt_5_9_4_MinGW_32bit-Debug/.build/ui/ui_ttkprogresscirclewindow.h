/********************************************************************************
** Form generated from reading UI file 'ttkprogresscirclewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKPROGRESSCIRCLEWINDOW_H
#define UI_TTKPROGRESSCIRCLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "ttkprogresscirclewidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTKProgressCircleWindow
{
public:
    QWidget *centralWidget;
    TTKProgressCircleWidget *widget;
    TTKProgressCircleWidget *widget_2;
    TTKProgressCircleWidget *widget_3;

    void setupUi(QMainWindow *TTKProgressCircleWindow)
    {
        if (TTKProgressCircleWindow->objectName().isEmpty())
            TTKProgressCircleWindow->setObjectName(QStringLiteral("TTKProgressCircleWindow"));
        TTKProgressCircleWindow->resize(465, 321);
        centralWidget = new QWidget(TTKProgressCircleWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new TTKProgressCircleWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(80, 100, 100, 100));
        widget_2 = new TTKProgressCircleWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(190, 100, 100, 100));
        widget_3 = new TTKProgressCircleWidget(centralWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(300, 100, 100, 100));
        TTKProgressCircleWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKProgressCircleWindow);

        QMetaObject::connectSlotsByName(TTKProgressCircleWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKProgressCircleWindow)
    {
        TTKProgressCircleWindow->setWindowTitle(QApplication::translate("TTKProgressCircleWindow", "TTKProgressCircleWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKProgressCircleWindow: public Ui_TTKProgressCircleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKPROGRESSCIRCLEWINDOW_H
