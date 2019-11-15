/********************************************************************************
** Form generated from reading UI file 'ttkcircleclickplanewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKCIRCLECLICKPLANEWINDOW_H
#define UI_TTKCIRCLECLICKPLANEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ttkcircleclickplane.h"

QT_BEGIN_NAMESPACE

class Ui_TTKCircleClickPlaneWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    TTKCircleClickPlane *label;

    void setupUi(QMainWindow *TTKCircleClickPlaneWindow)
    {
        if (TTKCircleClickPlaneWindow->objectName().isEmpty())
            TTKCircleClickPlaneWindow->setObjectName(QStringLiteral("TTKCircleClickPlaneWindow"));
        TTKCircleClickPlaneWindow->resize(320, 185);
        centralWidget = new QWidget(TTKCircleClickPlaneWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new TTKCircleClickPlane(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        TTKCircleClickPlaneWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKCircleClickPlaneWindow);

        QMetaObject::connectSlotsByName(TTKCircleClickPlaneWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKCircleClickPlaneWindow)
    {
        TTKCircleClickPlaneWindow->setWindowTitle(QApplication::translate("TTKCircleClickPlaneWindow", "TTKCircleClickPlaneWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKCircleClickPlaneWindow: public Ui_TTKCircleClickPlaneWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKCIRCLECLICKPLANEWINDOW_H
