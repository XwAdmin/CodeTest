/********************************************************************************
** Form generated from reading UI file 'ttkradiobuttonwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKRADIOBUTTONWINDOW_H
#define UI_TTKRADIOBUTTONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "ttkradiobuttonwidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTKRadioButtonWindow
{
public:
    QWidget *centralWidget;
    TTKRadioButtonWidget *widget;
    TTKRadioButtonWidget *widget_2;
    TTKRadioButtonWidget *widget_3;
    TTKRadioButtonWidget *widget_4;

    void setupUi(QMainWindow *TTKRadioButtonWindow)
    {
        if (TTKRadioButtonWindow->objectName().isEmpty())
            TTKRadioButtonWindow->setObjectName(QStringLiteral("TTKRadioButtonWindow"));
        TTKRadioButtonWindow->resize(465, 321);
        centralWidget = new QWidget(TTKRadioButtonWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new TTKRadioButtonWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(110, 50, 220, 40));
        widget_2 = new TTKRadioButtonWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(110, 110, 220, 40));
        widget_3 = new TTKRadioButtonWidget(centralWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(110, 170, 220, 40));
        widget_4 = new TTKRadioButtonWidget(centralWidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(110, 230, 220, 40));
        TTKRadioButtonWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKRadioButtonWindow);

        QMetaObject::connectSlotsByName(TTKRadioButtonWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKRadioButtonWindow)
    {
        TTKRadioButtonWindow->setWindowTitle(QApplication::translate("TTKRadioButtonWindow", "TTKRadioButtonWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKRadioButtonWindow: public Ui_TTKRadioButtonWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKRADIOBUTTONWINDOW_H
