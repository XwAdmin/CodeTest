/********************************************************************************
** Form generated from reading UI file 'ttkgrabitemwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKGRABITEMWINDOW_H
#define UI_TTKGRABITEMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ttkgrabitemwidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTKGrabItemWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    TTKGrabItemWidget *widget;

    void setupUi(QMainWindow *TTKGrabItemWindow)
    {
        if (TTKGrabItemWindow->objectName().isEmpty())
            TTKGrabItemWindow->setObjectName(QStringLiteral("TTKGrabItemWindow"));
        TTKGrabItemWindow->resize(451, 294);
        centralWidget = new QWidget(TTKGrabItemWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new TTKGrabItemWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));

        verticalLayout->addWidget(widget);

        TTKGrabItemWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKGrabItemWindow);

        QMetaObject::connectSlotsByName(TTKGrabItemWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKGrabItemWindow)
    {
        TTKGrabItemWindow->setWindowTitle(QApplication::translate("TTKGrabItemWindow", "TTKGrabItemWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKGrabItemWindow: public Ui_TTKGrabItemWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKGRABITEMWINDOW_H
