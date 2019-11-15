/********************************************************************************
** Form generated from reading UI file 'ttkanimationstackedwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKANIMATIONSTACKEDWINDOW_H
#define UI_TTKANIMATIONSTACKEDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "ttkanimationstackedwidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTKAnimationStackedWindow
{
public:
    QWidget *centralWidget;
    TTKAnimationStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_5;
    QWidget *page_2;
    QLabel *label_6;
    TTKAnimationStackedWidget *stackedWidget_2;
    QWidget *page_3;
    QLabel *label_7;
    QWidget *page_4;
    QLabel *label_8;
    TTKAnimationStackedWidget *stackedWidget_3;
    QWidget *page_9;
    QLabel *label_11;
    QWidget *page_10;
    QLabel *label_12;
    TTKAnimationStackedWidget *stackedWidget_4;
    QWidget *page_11;
    QLabel *label_9;
    QWidget *page_12;
    QLabel *label_10;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QMainWindow *TTKAnimationStackedWindow)
    {
        if (TTKAnimationStackedWindow->objectName().isEmpty())
            TTKAnimationStackedWindow->setObjectName(QStringLiteral("TTKAnimationStackedWindow"));
        TTKAnimationStackedWindow->resize(663, 413);
        centralWidget = new QWidget(TTKAnimationStackedWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new TTKAnimationStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(30, 80, 200, 100));
        stackedWidget->setStyleSheet(QStringLiteral(""));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setStyleSheet(QStringLiteral("background:red"));
        label_5 = new QLabel(page);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 40, 81, 16));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setStyleSheet(QStringLiteral("background:yellow"));
        label_6 = new QLabel(page_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 40, 81, 16));
        stackedWidget->addWidget(page_2);
        stackedWidget_2 = new TTKAnimationStackedWidget(centralWidget);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(430, 80, 200, 100));
        stackedWidget_2->setStyleSheet(QStringLiteral(""));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setStyleSheet(QStringLiteral("background:red"));
        label_7 = new QLabel(page_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(60, 40, 81, 16));
        stackedWidget_2->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setStyleSheet(QStringLiteral("background:yellow"));
        label_8 = new QLabel(page_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(60, 40, 81, 16));
        stackedWidget_2->addWidget(page_4);
        stackedWidget_3 = new TTKAnimationStackedWidget(centralWidget);
        stackedWidget_3->setObjectName(QStringLiteral("stackedWidget_3"));
        stackedWidget_3->setGeometry(QRect(430, 240, 200, 100));
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        page_9->setStyleSheet(QStringLiteral("background:red"));
        label_11 = new QLabel(page_9);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(60, 40, 81, 16));
        stackedWidget_3->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName(QStringLiteral("page_10"));
        page_10->setStyleSheet(QStringLiteral("background:yellow"));
        label_12 = new QLabel(page_10);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(60, 40, 81, 16));
        stackedWidget_3->addWidget(page_10);
        stackedWidget_4 = new TTKAnimationStackedWidget(centralWidget);
        stackedWidget_4->setObjectName(QStringLiteral("stackedWidget_4"));
        stackedWidget_4->setGeometry(QRect(30, 240, 200, 100));
        page_11 = new QWidget();
        page_11->setObjectName(QStringLiteral("page_11"));
        page_11->setStyleSheet(QStringLiteral("background:red"));
        label_9 = new QLabel(page_11);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(60, 40, 81, 16));
        stackedWidget_4->addWidget(page_11);
        page_12 = new QWidget();
        page_12->setObjectName(QStringLiteral("page_12"));
        page_12->setStyleSheet(QStringLiteral("background:yellow"));
        label_10 = new QLabel(page_12);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(60, 40, 81, 16));
        stackedWidget_4->addWidget(page_12);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 160, 91, 41));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 250, 91, 41));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 60, 81, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(490, 60, 81, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 220, 81, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(490, 220, 81, 16));
        TTKAnimationStackedWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKAnimationStackedWindow);

        stackedWidget->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(0);
        stackedWidget_3->setCurrentIndex(0);
        stackedWidget_4->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TTKAnimationStackedWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKAnimationStackedWindow)
    {
        TTKAnimationStackedWindow->setWindowTitle(QApplication::translate("TTKAnimationStackedWindow", "TTKStackedWidget", Q_NULLPTR));
        label_5->setText(QApplication::translate("TTKAnimationStackedWindow", "LeftToRight", Q_NULLPTR));
        label_6->setText(QApplication::translate("TTKAnimationStackedWindow", "LeftToRight", Q_NULLPTR));
        label_7->setText(QApplication::translate("TTKAnimationStackedWindow", "RightToLeft", Q_NULLPTR));
        label_8->setText(QApplication::translate("TTKAnimationStackedWindow", "RightToLeft", Q_NULLPTR));
        label_11->setText(QApplication::translate("TTKAnimationStackedWindow", "BottomToTop", Q_NULLPTR));
        label_12->setText(QApplication::translate("TTKAnimationStackedWindow", "BottomToTop", Q_NULLPTR));
        label_9->setText(QApplication::translate("TTKAnimationStackedWindow", "TopToBottom", Q_NULLPTR));
        label_10->setText(QApplication::translate("TTKAnimationStackedWindow", "TopToBottom", Q_NULLPTR));
        pushButton->setText(QApplication::translate("TTKAnimationStackedWindow", "\345\210\207\346\215\2421", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("TTKAnimationStackedWindow", "\345\210\207\346\215\2422", Q_NULLPTR));
        label->setText(QApplication::translate("TTKAnimationStackedWindow", "LeftToRight", Q_NULLPTR));
        label_2->setText(QApplication::translate("TTKAnimationStackedWindow", "RightToLeft", Q_NULLPTR));
        label_3->setText(QApplication::translate("TTKAnimationStackedWindow", "TopToBottom", Q_NULLPTR));
        label_4->setText(QApplication::translate("TTKAnimationStackedWindow", "BottomToTop", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKAnimationStackedWindow: public Ui_TTKAnimationStackedWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKANIMATIONSTACKEDWINDOW_H
