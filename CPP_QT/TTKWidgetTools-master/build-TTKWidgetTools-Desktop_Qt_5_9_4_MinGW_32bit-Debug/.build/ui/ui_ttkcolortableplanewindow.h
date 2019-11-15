/********************************************************************************
** Form generated from reading UI file 'ttkcolortableplanewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKCOLORTABLEPLANEWINDOW_H
#define UI_TTKCOLORTABLEPLANEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ttkcolortableplane.h"

QT_BEGIN_NAMESPACE

class Ui_TTKColorTablePlaneWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    TTKColorTablePlane *widget;

    void setupUi(QMainWindow *TTKColorTablePlaneWindow)
    {
        if (TTKColorTablePlaneWindow->objectName().isEmpty())
            TTKColorTablePlaneWindow->setObjectName(QStringLiteral("TTKColorTablePlaneWindow"));
        TTKColorTablePlaneWindow->resize(451, 294);
        centralWidget = new QWidget(TTKColorTablePlaneWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new TTKColorTablePlane(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));

        verticalLayout->addWidget(widget);

        TTKColorTablePlaneWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKColorTablePlaneWindow);

        QMetaObject::connectSlotsByName(TTKColorTablePlaneWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKColorTablePlaneWindow)
    {
        TTKColorTablePlaneWindow->setWindowTitle(QApplication::translate("TTKColorTablePlaneWindow", "TTKColorTablePlaneWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKColorTablePlaneWindow: public Ui_TTKColorTablePlaneWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKCOLORTABLEPLANEWINDOW_H
