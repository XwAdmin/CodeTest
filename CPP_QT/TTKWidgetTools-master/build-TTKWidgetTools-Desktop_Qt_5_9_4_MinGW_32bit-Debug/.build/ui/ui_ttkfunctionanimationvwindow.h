/********************************************************************************
** Form generated from reading UI file 'ttkfunctionanimationvwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKFUNCTIONANIMATIONVWINDOW_H
#define UI_TTKFUNCTIONANIMATIONVWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "ttkfunctionanimationwidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTKFunctionAnimationVWindow
{
public:
    QWidget *centralWidget;
    TTKOptionAnimationVWidget *widget_1;
    TTKSkinAnimationVWidget *widget_2;
    TTKTableAnimationVWidget *widget_3;
    TTKOptionAnimationVWidget *widget_4;
    TTKSkinAnimationVWidget *widget_5;
    TTKTableAnimationVWidget *widget_6;

    void setupUi(QMainWindow *TTKFunctionAnimationVWindow)
    {
        if (TTKFunctionAnimationVWindow->objectName().isEmpty())
            TTKFunctionAnimationVWindow->setObjectName(QStringLiteral("TTKFunctionAnimationVWindow"));
        TTKFunctionAnimationVWindow->resize(568, 382);
        centralWidget = new QWidget(TTKFunctionAnimationVWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget_1 = new TTKOptionAnimationVWidget(centralWidget);
        widget_1->setObjectName(QStringLiteral("widget_1"));
        widget_1->setGeometry(QRect(20, 20, 75, 340));
        widget_2 = new TTKSkinAnimationVWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(110, 20, 75, 340));
        widget_3 = new TTKTableAnimationVWidget(centralWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(200, 20, 75, 340));
        widget_4 = new TTKOptionAnimationVWidget(centralWidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(290, 20, 75, 340));
        widget_5 = new TTKSkinAnimationVWidget(centralWidget);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setGeometry(QRect(380, 20, 75, 340));
        widget_6 = new TTKTableAnimationVWidget(centralWidget);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setGeometry(QRect(470, 20, 75, 340));
        TTKFunctionAnimationVWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKFunctionAnimationVWindow);

        QMetaObject::connectSlotsByName(TTKFunctionAnimationVWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKFunctionAnimationVWindow)
    {
        TTKFunctionAnimationVWindow->setWindowTitle(QApplication::translate("TTKFunctionAnimationVWindow", "TTKFunctionAnimationVWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKFunctionAnimationVWindow: public Ui_TTKFunctionAnimationVWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKFUNCTIONANIMATIONVWINDOW_H
