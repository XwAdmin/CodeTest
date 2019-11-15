/********************************************************************************
** Form generated from reading UI file 'ttksliderwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKSLIDERWINDOW_H
#define UI_TTKSLIDERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "ttksliderwidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTKSliderWindow
{
public:
    QWidget *centralWidget;
    TTKSliderWidget *widget;
    TTKSliderWidget *widget_2;

    void setupUi(QMainWindow *TTKSliderWindow)
    {
        if (TTKSliderWindow->objectName().isEmpty())
            TTKSliderWindow->setObjectName(QStringLiteral("TTKSliderWindow"));
        TTKSliderWindow->resize(451, 294);
        TTKSliderWindow->setStyleSheet(QStringLiteral("#TTKSliderWindow{background:rgba(50, 50, 50, 50);}"));
        centralWidget = new QWidget(TTKSliderWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new TTKSliderWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 130, 300, 30));
        widget_2 = new TTKSliderWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(370, 40, 30, 200));
        TTKSliderWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKSliderWindow);

        QMetaObject::connectSlotsByName(TTKSliderWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKSliderWindow)
    {
        TTKSliderWindow->setWindowTitle(QApplication::translate("TTKSliderWindow", "TTKSliderWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKSliderWindow: public Ui_TTKSliderWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKSLIDERWINDOW_H
