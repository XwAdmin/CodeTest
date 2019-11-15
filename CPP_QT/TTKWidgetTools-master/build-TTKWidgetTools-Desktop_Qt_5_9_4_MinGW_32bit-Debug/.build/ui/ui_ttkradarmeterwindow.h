/********************************************************************************
** Form generated from reading UI file 'ttkradarmeterwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKRADARMETERWINDOW_H
#define UI_TTKRADARMETERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ttkradarmeterwidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTKRadarMeterWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    TTKRadarMeterWidget *widget;

    void setupUi(QMainWindow *TTKRadarMeterWindow)
    {
        if (TTKRadarMeterWindow->objectName().isEmpty())
            TTKRadarMeterWindow->setObjectName(QStringLiteral("TTKRadarMeterWindow"));
        TTKRadarMeterWindow->resize(465, 321);
        centralWidget = new QWidget(TTKRadarMeterWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new TTKRadarMeterWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));

        verticalLayout->addWidget(widget);

        TTKRadarMeterWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKRadarMeterWindow);

        QMetaObject::connectSlotsByName(TTKRadarMeterWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKRadarMeterWindow)
    {
        TTKRadarMeterWindow->setWindowTitle(QApplication::translate("TTKRadarMeterWindow", "TTKRadarMeterWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKRadarMeterWindow: public Ui_TTKRadarMeterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKRADARMETERWINDOW_H
