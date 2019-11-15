/********************************************************************************
** Form generated from reading UI file 'ttkfunctionlistvwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKFUNCTIONLISTVWINDOW_H
#define UI_TTKFUNCTIONLISTVWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "ttkfunctionlistvwidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTKFunctionListVWindow
{
public:
    QWidget *centralWidget;
    TTKFunctionListVWidget *widget;

    void setupUi(QMainWindow *TTKFunctionListVWindow)
    {
        if (TTKFunctionListVWindow->objectName().isEmpty())
            TTKFunctionListVWindow->setObjectName(QStringLiteral("TTKFunctionListVWindow"));
        TTKFunctionListVWindow->resize(453, 317);
        TTKFunctionListVWindow->setStyleSheet(QStringLiteral("#TTKFunctionListVWindow{background:rgb(79, 200, 255);}"));
        centralWidget = new QWidget(TTKFunctionListVWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new TTKFunctionListVWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(110, 40, 205, 231));
        TTKFunctionListVWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKFunctionListVWindow);

        QMetaObject::connectSlotsByName(TTKFunctionListVWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKFunctionListVWindow)
    {
        TTKFunctionListVWindow->setWindowTitle(QApplication::translate("TTKFunctionListVWindow", "TTKFunctionListVWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKFunctionListVWindow: public Ui_TTKFunctionListVWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKFUNCTIONLISTVWINDOW_H
