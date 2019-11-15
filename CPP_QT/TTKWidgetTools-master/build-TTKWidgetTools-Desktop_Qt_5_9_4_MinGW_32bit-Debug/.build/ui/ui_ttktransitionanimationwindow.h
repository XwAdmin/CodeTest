/********************************************************************************
** Form generated from reading UI file 'ttktransitionanimationwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKTRANSITIONANIMATIONWINDOW_H
#define UI_TTKTRANSITIONANIMATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ttktransitionanimationlabel.h"

QT_BEGIN_NAMESPACE

class Ui_TTKTransitionAnimationWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    TTKTransitionAnimationLabel *label;
    QPushButton *pushButton;

    void setupUi(QMainWindow *TTKTransitionAnimationWindow)
    {
        if (TTKTransitionAnimationWindow->objectName().isEmpty())
            TTKTransitionAnimationWindow->setObjectName(QStringLiteral("TTKTransitionAnimationWindow"));
        TTKTransitionAnimationWindow->resize(397, 295);
        centralWidget = new QWidget(TTKTransitionAnimationWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new TTKTransitionAnimationLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(200, 0));
        pushButton->setMaximumSize(QSize(200, 16777215));

        verticalLayout->addWidget(pushButton, 0, Qt::AlignHCenter);

        TTKTransitionAnimationWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKTransitionAnimationWindow);

        QMetaObject::connectSlotsByName(TTKTransitionAnimationWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKTransitionAnimationWindow)
    {
        TTKTransitionAnimationWindow->setWindowTitle(QApplication::translate("TTKTransitionAnimationWindow", "TTKTransitionAnimationWindow", Q_NULLPTR));
        label->setText(QString());
        pushButton->setText(QApplication::translate("TTKTransitionAnimationWindow", "\345\210\207\346\215\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKTransitionAnimationWindow: public Ui_TTKTransitionAnimationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKTRANSITIONANIMATIONWINDOW_H
