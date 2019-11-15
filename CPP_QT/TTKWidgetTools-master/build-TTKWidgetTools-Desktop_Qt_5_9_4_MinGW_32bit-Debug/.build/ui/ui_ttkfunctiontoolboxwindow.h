/********************************************************************************
** Form generated from reading UI file 'ttkfunctiontoolboxwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKFUNCTIONTOOLBOXWINDOW_H
#define UI_TTKFUNCTIONTOOLBOXWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "ttkfunctiontoolboxwidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTKFunctionToolBoxWindow
{
public:
    QWidget *centralWidget;
    TTKFunctionToolBoxWidget *widget;

    void setupUi(QMainWindow *TTKFunctionToolBoxWindow)
    {
        if (TTKFunctionToolBoxWindow->objectName().isEmpty())
            TTKFunctionToolBoxWindow->setObjectName(QStringLiteral("TTKFunctionToolBoxWindow"));
        TTKFunctionToolBoxWindow->resize(453, 317);
        TTKFunctionToolBoxWindow->setStyleSheet(QStringLiteral("#TTKFunctionToolBoxWindow{background:rgb(79, 200, 255);}"));
        centralWidget = new QWidget(TTKFunctionToolBoxWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new TTKFunctionToolBoxWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 30, 350, 250));
        TTKFunctionToolBoxWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKFunctionToolBoxWindow);

        QMetaObject::connectSlotsByName(TTKFunctionToolBoxWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKFunctionToolBoxWindow)
    {
        TTKFunctionToolBoxWindow->setWindowTitle(QApplication::translate("TTKFunctionToolBoxWindow", "TTKFunctionToolBoxWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKFunctionToolBoxWindow: public Ui_TTKFunctionToolBoxWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKFUNCTIONTOOLBOXWINDOW_H
