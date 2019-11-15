/********************************************************************************
** Form generated from reading UI file 'ttkflatbuttonwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKFLATBUTTONWINDOW_H
#define UI_TTKFLATBUTTONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "ttkflatbuttonwidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTKFlatButtonWindow
{
public:
    QWidget *centralWidget;
    TTKFlatButtonWidget *widget;
    TTKFlatButtonWidget *widget_2;
    TTKFlatButtonWidget *widget_3;
    TTKFlatButtonWidget *widget_4;

    void setupUi(QMainWindow *TTKFlatButtonWindow)
    {
        if (TTKFlatButtonWindow->objectName().isEmpty())
            TTKFlatButtonWindow->setObjectName(QStringLiteral("TTKFlatButtonWindow"));
        TTKFlatButtonWindow->resize(465, 321);
        centralWidget = new QWidget(TTKFlatButtonWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new TTKFlatButtonWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(105, 30, 220, 40));
        widget_2 = new TTKFlatButtonWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(105, 100, 220, 40));
        widget_3 = new TTKFlatButtonWidget(centralWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(105, 170, 220, 40));
        widget_4 = new TTKFlatButtonWidget(centralWidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(105, 240, 220, 40));
        TTKFlatButtonWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKFlatButtonWindow);

        QMetaObject::connectSlotsByName(TTKFlatButtonWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKFlatButtonWindow)
    {
        TTKFlatButtonWindow->setWindowTitle(QApplication::translate("TTKFlatButtonWindow", "TTKFlatButtonWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKFlatButtonWindow: public Ui_TTKFlatButtonWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKFLATBUTTONWINDOW_H
