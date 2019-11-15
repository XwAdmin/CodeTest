/********************************************************************************
** Form generated from reading UI file 'ttkmovedialogwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKMOVEDIALOGWINDOW_H
#define UI_TTKMOVEDIALOGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TTKMoveDialogWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;

    void setupUi(QMainWindow *TTKMoveDialogWindow)
    {
        if (TTKMoveDialogWindow->objectName().isEmpty())
            TTKMoveDialogWindow->setObjectName(QStringLiteral("TTKMoveDialogWindow"));
        TTKMoveDialogWindow->resize(451, 294);
        centralWidget = new QWidget(TTKMoveDialogWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(170, 250, 81, 31));
        TTKMoveDialogWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKMoveDialogWindow);

        QMetaObject::connectSlotsByName(TTKMoveDialogWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKMoveDialogWindow)
    {
        TTKMoveDialogWindow->setWindowTitle(QApplication::translate("TTKMoveDialogWindow", "TTKMoveDialogWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("TTKMoveDialogWindow", "\345\274\271\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKMoveDialogWindow: public Ui_TTKMoveDialogWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKMOVEDIALOGWINDOW_H
