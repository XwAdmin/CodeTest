/********************************************************************************
** Form generated from reading UI file 'ttksplititemwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKSPLITITEMWINDOW_H
#define UI_TTKSPLITITEMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "ttksplititemlabel.h"

QT_BEGIN_NAMESPACE

class Ui_TTKSplitItemWindow
{
public:
    QWidget *centralWidget;
    TTKSplitItemLabel *label;
    QLabel *info;

    void setupUi(QMainWindow *TTKSplitItemWindow)
    {
        if (TTKSplitItemWindow->objectName().isEmpty())
            TTKSplitItemWindow->setObjectName(QStringLiteral("TTKSplitItemWindow"));
        TTKSplitItemWindow->resize(451, 294);
        centralWidget = new QWidget(TTKSplitItemWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new TTKSplitItemLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 141, 301, 20));
        info = new QLabel(centralWidget);
        info->setObjectName(QStringLiteral("info"));
        info->setGeometry(QRect(20, 240, 411, 31));
        TTKSplitItemWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKSplitItemWindow);

        QMetaObject::connectSlotsByName(TTKSplitItemWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKSplitItemWindow)
    {
        TTKSplitItemWindow->setWindowTitle(QApplication::translate("TTKSplitItemWindow", "TTKSplitItemWindow", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TTKSplitItemWindow: public Ui_TTKSplitItemWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKSPLITITEMWINDOW_H
