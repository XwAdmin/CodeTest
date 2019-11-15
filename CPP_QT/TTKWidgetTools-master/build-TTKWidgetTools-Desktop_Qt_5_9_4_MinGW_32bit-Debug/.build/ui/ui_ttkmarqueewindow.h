/********************************************************************************
** Form generated from reading UI file 'ttkmarqueewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKMARQUEEWINDOW_H
#define UI_TTKMARQUEEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "ttkmarqueewidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTKMarqueeWindow
{
public:
    QWidget *centralWidget;
    TTKMarqueeWidget *widget;

    void setupUi(QMainWindow *TTKMarqueeWindow)
    {
        if (TTKMarqueeWindow->objectName().isEmpty())
            TTKMarqueeWindow->setObjectName(QStringLiteral("TTKMarqueeWindow"));
        TTKMarqueeWindow->resize(451, 294);
        centralWidget = new QWidget(TTKMarqueeWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new TTKMarqueeWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(60, 130, 341, 51));
        TTKMarqueeWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKMarqueeWindow);

        QMetaObject::connectSlotsByName(TTKMarqueeWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKMarqueeWindow)
    {
        TTKMarqueeWindow->setWindowTitle(QApplication::translate("TTKMarqueeWindow", "TTKMarqueeWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKMarqueeWindow: public Ui_TTKMarqueeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKMARQUEEWINDOW_H
