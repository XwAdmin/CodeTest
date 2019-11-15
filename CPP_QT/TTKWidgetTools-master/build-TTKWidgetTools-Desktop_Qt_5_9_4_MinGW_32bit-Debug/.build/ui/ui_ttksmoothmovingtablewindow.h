/********************************************************************************
** Form generated from reading UI file 'ttksmoothmovingtablewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKSMOOTHMOVINGTABLEWINDOW_H
#define UI_TTKSMOOTHMOVINGTABLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ttksmoothmovingtablewidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTKSmoothMovingTableWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    TTKSmoothMovingTableWidget *tableWidget;

    void setupUi(QMainWindow *TTKSmoothMovingTableWindow)
    {
        if (TTKSmoothMovingTableWindow->objectName().isEmpty())
            TTKSmoothMovingTableWindow->setObjectName(QStringLiteral("TTKSmoothMovingTableWindow"));
        TTKSmoothMovingTableWindow->resize(516, 377);
        centralWidget = new QWidget(TTKSmoothMovingTableWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableWidget = new TTKSmoothMovingTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        TTKSmoothMovingTableWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKSmoothMovingTableWindow);

        QMetaObject::connectSlotsByName(TTKSmoothMovingTableWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKSmoothMovingTableWindow)
    {
        TTKSmoothMovingTableWindow->setWindowTitle(QApplication::translate("TTKSmoothMovingTableWindow", "TTKSmoothMovingTableWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKSmoothMovingTableWindow: public Ui_TTKSmoothMovingTableWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKSMOOTHMOVINGTABLEWINDOW_H
