/********************************************************************************
** Form generated from reading UI file 'ttkmovewidgetwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKMOVEWIDGETWINDOW_H
#define UI_TTKMOVEWIDGETWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TTKMoveWidgetWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;

    void setupUi(QMainWindow *TTKMoveWidgetWindow)
    {
        if (TTKMoveWidgetWindow->objectName().isEmpty())
            TTKMoveWidgetWindow->setObjectName(QStringLiteral("TTKMoveWidgetWindow"));
        TTKMoveWidgetWindow->resize(451, 294);
        centralWidget = new QWidget(TTKMoveWidgetWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 250, 81, 31));
        TTKMoveWidgetWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKMoveWidgetWindow);

        QMetaObject::connectSlotsByName(TTKMoveWidgetWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKMoveWidgetWindow)
    {
        TTKMoveWidgetWindow->setWindowTitle(QApplication::translate("TTKMoveWidgetWindow", "TTKMoveWidgetWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("TTKMoveWidgetWindow", "\345\274\271\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKMoveWidgetWindow: public Ui_TTKMoveWidgetWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKMOVEWIDGETWINDOW_H
