/********************************************************************************
** Form generated from reading UI file 'ttkfunctionlisthwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKFUNCTIONLISTHWINDOW_H
#define UI_TTKFUNCTIONLISTHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "ttkfunctionlisthwidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTKFunctionListHWindow
{
public:
    QWidget *centralWidget;
    TTKFunctionListHWidget *widget;

    void setupUi(QMainWindow *TTKFunctionListHWindow)
    {
        if (TTKFunctionListHWindow->objectName().isEmpty())
            TTKFunctionListHWindow->setObjectName(QStringLiteral("TTKFunctionListHWindow"));
        TTKFunctionListHWindow->resize(702, 317);
        TTKFunctionListHWindow->setStyleSheet(QStringLiteral("#TTKFunctionListHWindow{background:rgb(79, 200, 255);}"));
        centralWidget = new QWidget(TTKFunctionListHWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new TTKFunctionListHWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 80, 621, 101));
        TTKFunctionListHWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKFunctionListHWindow);

        QMetaObject::connectSlotsByName(TTKFunctionListHWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKFunctionListHWindow)
    {
        TTKFunctionListHWindow->setWindowTitle(QApplication::translate("TTKFunctionListHWindow", "TTKFunctionListHWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKFunctionListHWindow: public Ui_TTKFunctionListHWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKFUNCTIONLISTHWINDOW_H
