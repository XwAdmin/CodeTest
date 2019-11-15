/********************************************************************************
** Form generated from reading UI file 'ttklayoutanimationwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKLAYOUTANIMATIONWINDOW_H
#define UI_TTKLAYOUTANIMATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ttklayoutanimationwidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTKLayoutAnimationWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    TTKLayoutAnimationWidget *widget;

    void setupUi(QMainWindow *TTKLayoutAnimationWindow)
    {
        if (TTKLayoutAnimationWindow->objectName().isEmpty())
            TTKLayoutAnimationWindow->setObjectName(QStringLiteral("TTKLayoutAnimationWindow"));
        TTKLayoutAnimationWindow->resize(499, 332);
        centralWidget = new QWidget(TTKLayoutAnimationWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new TTKLayoutAnimationWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(0, 314));
        widget->setMaximumSize(QSize(16777215, 314));

        verticalLayout->addWidget(widget);

        TTKLayoutAnimationWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKLayoutAnimationWindow);

        QMetaObject::connectSlotsByName(TTKLayoutAnimationWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKLayoutAnimationWindow)
    {
        TTKLayoutAnimationWindow->setWindowTitle(QApplication::translate("TTKLayoutAnimationWindow", "TTKLayoutAnimationWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKLayoutAnimationWindow: public Ui_TTKLayoutAnimationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKLAYOUTANIMATIONWINDOW_H
