/********************************************************************************
** Form generated from reading UI file 'ttktimemeterwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKTIMEMETERWINDOW_H
#define UI_TTKTIMEMETERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ttktimemeterwidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTKTimeMeterWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    TTKTimeMeterWidget *widget;
    QSlider *horizontalSlider;

    void setupUi(QMainWindow *TTKTimeMeterWindow)
    {
        if (TTKTimeMeterWindow->objectName().isEmpty())
            TTKTimeMeterWindow->setObjectName(QStringLiteral("TTKTimeMeterWindow"));
        TTKTimeMeterWindow->resize(465, 321);
        centralWidget = new QWidget(TTKTimeMeterWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new TTKTimeMeterWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));

        verticalLayout->addWidget(widget);

        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);

        TTKTimeMeterWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKTimeMeterWindow);

        QMetaObject::connectSlotsByName(TTKTimeMeterWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKTimeMeterWindow)
    {
        TTKTimeMeterWindow->setWindowTitle(QApplication::translate("TTKTimeMeterWindow", "TTKTimeMeterWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKTimeMeterWindow: public Ui_TTKTimeMeterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKTIMEMETERWINDOW_H
