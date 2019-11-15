/********************************************************************************
** Form generated from reading UI file 'ttkroundanimationwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKROUNDANIMATIONWINDOW_H
#define UI_TTKROUNDANIMATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "ttkroundanimationlabel.h"

QT_BEGIN_NAMESPACE

class Ui_TTKRoundAnimationWindow
{
public:
    QWidget *centralWidget;
    TTKRoundAnimationLabel *widget;

    void setupUi(QMainWindow *TTKRoundAnimationWindow)
    {
        if (TTKRoundAnimationWindow->objectName().isEmpty())
            TTKRoundAnimationWindow->setObjectName(QStringLiteral("TTKRoundAnimationWindow"));
        TTKRoundAnimationWindow->resize(362, 305);
        centralWidget = new QWidget(TTKRoundAnimationWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new TTKRoundAnimationLabel(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 40, 200, 200));
        TTKRoundAnimationWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKRoundAnimationWindow);

        QMetaObject::connectSlotsByName(TTKRoundAnimationWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKRoundAnimationWindow)
    {
        TTKRoundAnimationWindow->setWindowTitle(QApplication::translate("TTKRoundAnimationWindow", "TTKRoundAnimationWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKRoundAnimationWindow: public Ui_TTKRoundAnimationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKROUNDANIMATIONWINDOW_H
