/********************************************************************************
** Form generated from reading UI file 'ttkgiflabelwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKGIFLABELWINDOW_H
#define UI_TTKGIFLABELWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include "ttkgiflabelwidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTKGifLabelWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    TTKGifLabelWidget *label_5;
    TTKGifLabelWidget *label_2;
    TTKGifLabelWidget *label;
    TTKGifLabelWidget *label_3;
    TTKGifLabelWidget *label_4;
    TTKGifLabelWidget *label_6;
    TTKGifLabelWidget *label_7;
    TTKGifLabelWidget *label_8;
    TTKGifLabelWidget *label_9;
    TTKGifLabelWidget *label_10;

    void setupUi(QMainWindow *TTKGifLabelWindow)
    {
        if (TTKGifLabelWindow->objectName().isEmpty())
            TTKGifLabelWindow->setObjectName(QStringLiteral("TTKGifLabelWindow"));
        TTKGifLabelWindow->resize(789, 562);
        TTKGifLabelWindow->setStyleSheet(QStringLiteral("#TTKGifLabelWindow{background:rgba(50, 50, 50, 50);}"));
        centralWidget = new QWidget(TTKGifLabelWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_5 = new TTKGifLabelWidget(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(42, 42));
        label_5->setMaximumSize(QSize(42, 42));

        gridLayout->addWidget(label_5, 0, 4, 1, 1);

        label_2 = new TTKGifLabelWidget(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(58, 58));
        label_2->setMaximumSize(QSize(58, 58));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label = new TTKGifLabelWidget(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(35, 35));
        label->setMaximumSize(QSize(35, 35));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new TTKGifLabelWidget(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(26, 26));
        label_3->setMaximumSize(QSize(26, 26));

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        label_4 = new TTKGifLabelWidget(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(16, 16));
        label_4->setMaximumSize(QSize(16, 16));

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        label_6 = new TTKGifLabelWidget(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(38, 38));
        label_6->setMaximumSize(QSize(38, 38));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        label_7 = new TTKGifLabelWidget(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(14, 14));
        label_7->setMaximumSize(QSize(14, 14));

        gridLayout->addWidget(label_7, 1, 1, 1, 1);

        label_8 = new TTKGifLabelWidget(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(93, 93));
        label_8->setMaximumSize(QSize(93, 93));

        gridLayout->addWidget(label_8, 1, 2, 1, 1);

        label_9 = new TTKGifLabelWidget(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(30, 30));
        label_9->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(label_9, 1, 3, 1, 1);

        label_10 = new TTKGifLabelWidget(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(350, 50));
        label_10->setMaximumSize(QSize(350, 50));

        gridLayout->addWidget(label_10, 1, 4, 1, 1);

        TTKGifLabelWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKGifLabelWindow);

        QMetaObject::connectSlotsByName(TTKGifLabelWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKGifLabelWindow)
    {
        TTKGifLabelWindow->setWindowTitle(QApplication::translate("TTKGifLabelWindow", "TTKGifLabelWindow", Q_NULLPTR));
        label_5->setText(QString());
        label_2->setText(QString());
        label->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TTKGifLabelWindow: public Ui_TTKGifLabelWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKGIFLABELWINDOW_H
