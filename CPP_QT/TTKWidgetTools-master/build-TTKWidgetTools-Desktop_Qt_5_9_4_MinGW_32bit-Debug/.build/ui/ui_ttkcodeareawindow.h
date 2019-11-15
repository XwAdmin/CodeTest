/********************************************************************************
** Form generated from reading UI file 'ttkcodeareawindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKCODEAREAWINDOW_H
#define UI_TTKCODEAREAWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ttkcodeareawidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTKCodeAreaWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    TTKCodeAreaWidget *label;

    void setupUi(QMainWindow *TTKCodeAreaWindow)
    {
        if (TTKCodeAreaWindow->objectName().isEmpty())
            TTKCodeAreaWindow->setObjectName(QStringLiteral("TTKCodeAreaWindow"));
        TTKCodeAreaWindow->resize(320, 185);
        centralWidget = new QWidget(TTKCodeAreaWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new TTKCodeAreaWidget(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        TTKCodeAreaWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKCodeAreaWindow);

        QMetaObject::connectSlotsByName(TTKCodeAreaWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKCodeAreaWindow)
    {
        TTKCodeAreaWindow->setWindowTitle(QApplication::translate("TTKCodeAreaWindow", "TTKCodeAreaWindow", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TTKCodeAreaWindow: public Ui_TTKCodeAreaWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKCODEAREAWINDOW_H
