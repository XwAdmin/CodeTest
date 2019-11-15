/********************************************************************************
** Form generated from reading UI file 'ttkprogresswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKPROGRESSWINDOW_H
#define UI_TTKPROGRESSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "ttkprogresswidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTKProgressWindow
{
public:
    QWidget *centralWidget;
    TTKProgressWidget *widget;

    void setupUi(QMainWindow *TTKProgressWindow)
    {
        if (TTKProgressWindow->objectName().isEmpty())
            TTKProgressWindow->setObjectName(QStringLiteral("TTKProgressWindow"));
        TTKProgressWindow->resize(465, 321);
        centralWidget = new QWidget(TTKProgressWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new TTKProgressWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(110, 130, 220, 40));
        TTKProgressWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKProgressWindow);

        QMetaObject::connectSlotsByName(TTKProgressWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKProgressWindow)
    {
        TTKProgressWindow->setWindowTitle(QApplication::translate("TTKProgressWindow", "TTKProgressWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKProgressWindow: public Ui_TTKProgressWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKPROGRESSWINDOW_H
