/********************************************************************************
** Form generated from reading UI file 'ttklineeditwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKLINEEDITWINDOW_H
#define UI_TTKLINEEDITWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "ttklineeditwidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTKLineEditWindow
{
public:
    QWidget *centralWidget;
    TTKLineEditWidget *widget;
    TTKLineEditWidget *widget_2;

    void setupUi(QMainWindow *TTKLineEditWindow)
    {
        if (TTKLineEditWindow->objectName().isEmpty())
            TTKLineEditWindow->setObjectName(QStringLiteral("TTKLineEditWindow"));
        TTKLineEditWindow->resize(499, 332);
        centralWidget = new QWidget(TTKLineEditWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new TTKLineEditWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(90, 50, 251, 61));
        widget_2 = new TTKLineEditWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(90, 170, 251, 61));
        TTKLineEditWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKLineEditWindow);

        QMetaObject::connectSlotsByName(TTKLineEditWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKLineEditWindow)
    {
        TTKLineEditWindow->setWindowTitle(QApplication::translate("TTKLineEditWindow", "TTKLineEditWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKLineEditWindow: public Ui_TTKLineEditWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKLINEEDITWINDOW_H
