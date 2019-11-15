/********************************************************************************
** Form generated from reading UI file 'ttkshiningsliderwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKSHININGSLIDERWINDOW_H
#define UI_TTKSHININGSLIDERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "ttkshiningsliderwidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTKShiningSliderWindow
{
public:
    QWidget *centralWidget;
    TTKShiningSliderWidget *widget;

    void setupUi(QMainWindow *TTKShiningSliderWindow)
    {
        if (TTKShiningSliderWindow->objectName().isEmpty())
            TTKShiningSliderWindow->setObjectName(QStringLiteral("TTKShiningSliderWindow"));
        TTKShiningSliderWindow->resize(451, 294);
        TTKShiningSliderWindow->setStyleSheet(QStringLiteral("#TTKShiningSliderWindow{background:rgba(50, 50, 50, 50);}"));
        centralWidget = new QWidget(TTKShiningSliderWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new TTKShiningSliderWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 110, 361, 61));
        TTKShiningSliderWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKShiningSliderWindow);

        QMetaObject::connectSlotsByName(TTKShiningSliderWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKShiningSliderWindow)
    {
        TTKShiningSliderWindow->setWindowTitle(QApplication::translate("TTKShiningSliderWindow", "TTKShiningSliderWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKShiningSliderWindow: public Ui_TTKShiningSliderWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKSHININGSLIDERWINDOW_H
