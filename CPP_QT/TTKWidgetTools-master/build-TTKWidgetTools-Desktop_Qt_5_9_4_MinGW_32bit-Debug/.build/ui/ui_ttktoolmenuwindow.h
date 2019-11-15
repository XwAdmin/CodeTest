/********************************************************************************
** Form generated from reading UI file 'ttktoolmenuwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKTOOLMENUWINDOW_H
#define UI_TTKTOOLMENUWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "ttktoolmenuwidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTKToolMenuWindow
{
public:
    QWidget *centralWidget;
    TTKToolMenuWidget *toolButton;

    void setupUi(QMainWindow *TTKToolMenuWindow)
    {
        if (TTKToolMenuWindow->objectName().isEmpty())
            TTKToolMenuWindow->setObjectName(QStringLiteral("TTKToolMenuWindow"));
        TTKToolMenuWindow->resize(385, 281);
        centralWidget = new QWidget(TTKToolMenuWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        toolButton = new TTKToolMenuWidget(centralWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(140, 180, 31, 31));
        TTKToolMenuWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKToolMenuWindow);

        QMetaObject::connectSlotsByName(TTKToolMenuWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKToolMenuWindow)
    {
        TTKToolMenuWindow->setWindowTitle(QApplication::translate("TTKToolMenuWindow", "TTKToolMenuWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKToolMenuWindow: public Ui_TTKToolMenuWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKTOOLMENUWINDOW_H
