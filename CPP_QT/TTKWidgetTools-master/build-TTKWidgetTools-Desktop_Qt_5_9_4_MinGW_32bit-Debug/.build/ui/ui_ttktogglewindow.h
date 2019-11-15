/********************************************************************************
** Form generated from reading UI file 'ttktogglewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKTOGGLEWINDOW_H
#define UI_TTKTOGGLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "ttktogglewidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTKToggleWindow
{
public:
    QWidget *centralWidget;
    TTKToggleWidget *widget;
    TTKToggleWidget *widget_2;
    TTKToggleWidget *widget_3;
    TTKToggleWidget *widget_4;

    void setupUi(QMainWindow *TTKToggleWindow)
    {
        if (TTKToggleWindow->objectName().isEmpty())
            TTKToggleWindow->setObjectName(QStringLiteral("TTKToggleWindow"));
        TTKToggleWindow->resize(465, 321);
        centralWidget = new QWidget(TTKToggleWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new TTKToggleWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 60, 120, 60));
        widget_2 = new TTKToggleWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(250, 60, 120, 60));
        widget_3 = new TTKToggleWidget(centralWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(80, 150, 60, 120));
        widget_4 = new TTKToggleWidget(centralWidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(280, 150, 60, 120));
        TTKToggleWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKToggleWindow);

        QMetaObject::connectSlotsByName(TTKToggleWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKToggleWindow)
    {
        TTKToggleWindow->setWindowTitle(QApplication::translate("TTKToggleWindow", "TTKToggleWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKToggleWindow: public Ui_TTKToggleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKTOGGLEWINDOW_H
