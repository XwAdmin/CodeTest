/********************************************************************************
** Form generated from reading UI file 'ttkpaintmeterwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKPAINTMETERWINDOW_H
#define UI_TTKPAINTMETERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ttkpaintmeterwidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTKPaintMeterWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    TTKPaintMeterWidget *widget;
    QSlider *horizontalSlider;

    void setupUi(QMainWindow *TTKPaintMeterWindow)
    {
        if (TTKPaintMeterWindow->objectName().isEmpty())
            TTKPaintMeterWindow->setObjectName(QStringLiteral("TTKPaintMeterWindow"));
        TTKPaintMeterWindow->resize(465, 321);
        centralWidget = new QWidget(TTKPaintMeterWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new TTKPaintMeterWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));

        verticalLayout->addWidget(widget);

        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);

        TTKPaintMeterWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKPaintMeterWindow);

        QMetaObject::connectSlotsByName(TTKPaintMeterWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKPaintMeterWindow)
    {
        TTKPaintMeterWindow->setWindowTitle(QApplication::translate("TTKPaintMeterWindow", "TTKPaintMeterWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKPaintMeterWindow: public Ui_TTKPaintMeterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKPAINTMETERWINDOW_H
