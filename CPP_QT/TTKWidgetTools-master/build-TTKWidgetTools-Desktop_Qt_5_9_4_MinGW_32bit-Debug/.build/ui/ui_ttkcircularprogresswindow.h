/********************************************************************************
** Form generated from reading UI file 'ttkcircularprogresswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKCIRCULARPROGRESSWINDOW_H
#define UI_TTKCIRCULARPROGRESSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "ttkcircularprogresswidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTKCircularProgressWindow
{
public:
    QWidget *centralWidget;
    TTKCircularProgressWidget *widget;
    TTKCircularProgressWidget *widget_2;
    TTKCircularProgressWidget *widget_3;

    void setupUi(QMainWindow *TTKCircularProgressWindow)
    {
        if (TTKCircularProgressWindow->objectName().isEmpty())
            TTKCircularProgressWindow->setObjectName(QStringLiteral("TTKCircularProgressWindow"));
        TTKCircularProgressWindow->resize(465, 321);
        centralWidget = new QWidget(TTKCircularProgressWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new TTKCircularProgressWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(80, 100, 100, 100));
        widget_2 = new TTKCircularProgressWidget(centralWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(190, 100, 100, 100));
        widget_3 = new TTKCircularProgressWidget(centralWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(300, 100, 100, 100));
        TTKCircularProgressWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKCircularProgressWindow);

        QMetaObject::connectSlotsByName(TTKCircularProgressWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKCircularProgressWindow)
    {
        TTKCircularProgressWindow->setWindowTitle(QApplication::translate("TTKCircularProgressWindow", "TTKCircularProgressWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKCircularProgressWindow: public Ui_TTKCircularProgressWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKCIRCULARPROGRESSWINDOW_H
