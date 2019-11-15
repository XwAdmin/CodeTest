/********************************************************************************
** Form generated from reading UI file 'ttktoastwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKTOASTWINDOW_H
#define UI_TTKTOASTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TTKToastWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;

    void setupUi(QMainWindow *TTKToastWindow)
    {
        if (TTKToastWindow->objectName().isEmpty())
            TTKToastWindow->setObjectName(QStringLiteral("TTKToastWindow"));
        TTKToastWindow->resize(451, 294);
        centralWidget = new QWidget(TTKToastWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 210, 81, 31));
        TTKToastWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKToastWindow);

        QMetaObject::connectSlotsByName(TTKToastWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKToastWindow)
    {
        TTKToastWindow->setWindowTitle(QApplication::translate("TTKToastWindow", "TTKToastWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("TTKToastWindow", "\345\274\271\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKToastWindow: public Ui_TTKToastWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKTOASTWINDOW_H
