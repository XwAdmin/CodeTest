/********************************************************************************
** Form generated from reading UI file 'ttkcheckbuttonwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKCHECKBUTTONWINDOW_H
#define UI_TTKCHECKBUTTONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "ttkcheckbuttonwidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTKCheckButtonWindow
{
public:
    QWidget *centralWidget;
    TTKCheckButtonWidget *widget;
    TTKCheckButtonWidget *widget_2;
    TTKCheckButtonWidget *widget_3;
    TTKCheckButtonWidget *widget_4;

    void setupUi(QMainWindow *TTKCheckButtonWindow)
    {
        if (TTKCheckButtonWindow->objectName().isEmpty())
            TTKCheckButtonWindow->setObjectName(QStringLiteral("TTKCheckButtonWindow"));
        TTKCheckButtonWindow->resize(465, 321);
        centralWidget = new QWidget(TTKCheckButtonWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new TTKCheckButtonWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(110, 50, 220, 40));
        widget_2 = new TTKCheckButtonWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(110, 110, 220, 40));
        widget_3 = new TTKCheckButtonWidget(centralWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(110, 170, 220, 40));
        widget_4 = new TTKCheckButtonWidget(centralWidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(110, 230, 220, 40));
        TTKCheckButtonWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKCheckButtonWindow);

        QMetaObject::connectSlotsByName(TTKCheckButtonWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKCheckButtonWindow)
    {
        TTKCheckButtonWindow->setWindowTitle(QApplication::translate("TTKCheckButtonWindow", "TTKCheckButtonWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKCheckButtonWindow: public Ui_TTKCheckButtonWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKCHECKBUTTONWINDOW_H
