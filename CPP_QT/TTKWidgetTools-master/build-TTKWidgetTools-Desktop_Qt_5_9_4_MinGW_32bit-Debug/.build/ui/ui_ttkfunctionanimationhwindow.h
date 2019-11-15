/********************************************************************************
** Form generated from reading UI file 'ttkfunctionanimationhwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKFUNCTIONANIMATIONHWINDOW_H
#define UI_TTKFUNCTIONANIMATIONHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "ttkfunctionanimationwidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTKFunctionAnimationHWindow
{
public:
    QWidget *centralWidget;
    TTKOptionAnimationHWidget *widget;
    TTKSkinAnimationHWidget *widget_2;
    TTKTableAnimationHWidget *widget_3;
    TTKOptionAnimationHWidget *widget_4;
    TTKTableAnimationHWidget *widget_5;
    TTKSkinAnimationHWidget *widget_6;

    void setupUi(QMainWindow *TTKFunctionAnimationHWindow)
    {
        if (TTKFunctionAnimationHWindow->objectName().isEmpty())
            TTKFunctionAnimationHWindow->setObjectName(QStringLiteral("TTKFunctionAnimationHWindow"));
        TTKFunctionAnimationHWindow->resize(453, 382);
        centralWidget = new QWidget(TTKFunctionAnimationHWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new TTKOptionAnimationHWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 20, 405, 41));
        widget_2 = new TTKSkinAnimationHWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(20, 80, 405, 41));
        widget_3 = new TTKTableAnimationHWidget(centralWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(20, 140, 405, 41));
        widget_4 = new TTKOptionAnimationHWidget(centralWidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(20, 200, 405, 41));
        widget_5 = new TTKTableAnimationHWidget(centralWidget);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setGeometry(QRect(20, 320, 405, 41));
        widget_6 = new TTKSkinAnimationHWidget(centralWidget);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setGeometry(QRect(20, 260, 405, 41));
        TTKFunctionAnimationHWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKFunctionAnimationHWindow);

        QMetaObject::connectSlotsByName(TTKFunctionAnimationHWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKFunctionAnimationHWindow)
    {
        TTKFunctionAnimationHWindow->setWindowTitle(QApplication::translate("TTKFunctionAnimationHWindow", "TTKFunctionAnimationHWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKFunctionAnimationHWindow: public Ui_TTKFunctionAnimationHWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKFUNCTIONANIMATIONHWINDOW_H
