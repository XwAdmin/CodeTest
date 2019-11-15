/********************************************************************************
** Form generated from reading UI file 'ttkpictureflowwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKPICTUREFLOWWINDOW_H
#define UI_TTKPICTUREFLOWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include "ttkpictureflowwidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTKPictureFlowWindow
{
public:
    TTKPictureFlowWidget *widget;

    void setupUi(QMainWindow *TTKPictureFlowWindow)
    {
        if (TTKPictureFlowWindow->objectName().isEmpty())
            TTKPictureFlowWindow->setObjectName(QStringLiteral("TTKPictureFlowWindow"));
        TTKPictureFlowWindow->resize(503, 349);
        widget = new TTKPictureFlowWidget(TTKPictureFlowWindow);
        widget->setObjectName(QStringLiteral("widget"));
        TTKPictureFlowWindow->setCentralWidget(widget);

        retranslateUi(TTKPictureFlowWindow);

        QMetaObject::connectSlotsByName(TTKPictureFlowWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKPictureFlowWindow)
    {
        TTKPictureFlowWindow->setWindowTitle(QApplication::translate("TTKPictureFlowWindow", "TTKPictureFlowWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKPictureFlowWindow: public Ui_TTKPictureFlowWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKPICTUREFLOWWINDOW_H
