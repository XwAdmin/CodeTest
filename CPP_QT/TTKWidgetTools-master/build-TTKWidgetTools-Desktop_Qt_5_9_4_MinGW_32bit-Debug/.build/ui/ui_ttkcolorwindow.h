/********************************************************************************
** Form generated from reading UI file 'ttkcolorwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKCOLORWINDOW_H
#define UI_TTKCOLORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ttkcolordialog.h"

QT_BEGIN_NAMESPACE

class Ui_TTKColorWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    TTKHlPalette *wgtPalette;
    TTKHlSaturationPalette *wgtSaturationIndicator;

    void setupUi(QMainWindow *TTKColorWindow)
    {
        if (TTKColorWindow->objectName().isEmpty())
            TTKColorWindow->setObjectName(QStringLiteral("TTKColorWindow"));
        TTKColorWindow->resize(451, 294);
        centralWidget = new QWidget(TTKColorWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        wgtPalette = new TTKHlPalette(centralWidget);
        wgtPalette->setObjectName(QStringLiteral("wgtPalette"));

        verticalLayout->addWidget(wgtPalette);

        wgtSaturationIndicator = new TTKHlSaturationPalette(centralWidget);
        wgtSaturationIndicator->setObjectName(QStringLiteral("wgtSaturationIndicator"));

        verticalLayout->addWidget(wgtSaturationIndicator);

        TTKColorWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKColorWindow);

        QMetaObject::connectSlotsByName(TTKColorWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKColorWindow)
    {
        TTKColorWindow->setWindowTitle(QApplication::translate("TTKColorWindow", "TTKColorWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKColorWindow: public Ui_TTKColorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKCOLORWINDOW_H
