/********************************************************************************
** Form generated from reading UI file 'ttkspeedmeterwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKSPEEDMETERWINDOW_H
#define UI_TTKSPEEDMETERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ttkspeedmeterwidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTKSpeedMeterWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    TTKSpeedMeterWidget *widget;
    QSlider *horizontalSlider;

    void setupUi(QMainWindow *TTKSpeedMeterWindow)
    {
        if (TTKSpeedMeterWindow->objectName().isEmpty())
            TTKSpeedMeterWindow->setObjectName(QStringLiteral("TTKSpeedMeterWindow"));
        TTKSpeedMeterWindow->resize(465, 321);
        centralWidget = new QWidget(TTKSpeedMeterWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new TTKSpeedMeterWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));

        verticalLayout->addWidget(widget);

        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);

        TTKSpeedMeterWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKSpeedMeterWindow);

        QMetaObject::connectSlotsByName(TTKSpeedMeterWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKSpeedMeterWindow)
    {
        TTKSpeedMeterWindow->setWindowTitle(QApplication::translate("TTKSpeedMeterWindow", "TTKSpeedMeterWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKSpeedMeterWindow: public Ui_TTKSpeedMeterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKSPEEDMETERWINDOW_H
