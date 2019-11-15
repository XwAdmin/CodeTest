/********************************************************************************
** Form generated from reading UI file 'ttkmoveresizewidgetwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKMOVERESIZEWIDGETWINDOW_H
#define UI_TTKMOVERESIZEWIDGETWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TTKMoveResizeWidgetWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;

    void setupUi(QMainWindow *TTKMoveResizeWidgetWindow)
    {
        if (TTKMoveResizeWidgetWindow->objectName().isEmpty())
            TTKMoveResizeWidgetWindow->setObjectName(QStringLiteral("TTKMoveResizeWidgetWindow"));
        TTKMoveResizeWidgetWindow->resize(451, 294);
        centralWidget = new QWidget(TTKMoveResizeWidgetWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 250, 81, 31));
        TTKMoveResizeWidgetWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKMoveResizeWidgetWindow);

        QMetaObject::connectSlotsByName(TTKMoveResizeWidgetWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKMoveResizeWidgetWindow)
    {
        TTKMoveResizeWidgetWindow->setWindowTitle(QApplication::translate("TTKMoveResizeWidgetWindow", "TTKMoveResizeWidgetWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("TTKMoveResizeWidgetWindow", "\345\274\271\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKMoveResizeWidgetWindow: public Ui_TTKMoveResizeWidgetWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKMOVERESIZEWIDGETWINDOW_H
