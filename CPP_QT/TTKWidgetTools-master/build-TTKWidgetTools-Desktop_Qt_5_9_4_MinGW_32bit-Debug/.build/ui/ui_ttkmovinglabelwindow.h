/********************************************************************************
** Form generated from reading UI file 'ttkmovinglabelwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKMOVINGLABELWINDOW_H
#define UI_TTKMOVINGLABELWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ttkmovinglabelslider.h"

QT_BEGIN_NAMESPACE

class Ui_TTKMovingLabelWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    TTKMovingLabelSlider *horizontalSlider;

    void setupUi(QMainWindow *TTKMovingLabelWindow)
    {
        if (TTKMovingLabelWindow->objectName().isEmpty())
            TTKMovingLabelWindow->setObjectName(QStringLiteral("TTKMovingLabelWindow"));
        TTKMovingLabelWindow->resize(550, 340);
        centralWidget = new QWidget(TTKMovingLabelWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalSlider = new TTKMovingLabelSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider);

        TTKMovingLabelWindow->setCentralWidget(centralWidget);

        retranslateUi(TTKMovingLabelWindow);

        QMetaObject::connectSlotsByName(TTKMovingLabelWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKMovingLabelWindow)
    {
        TTKMovingLabelWindow->setWindowTitle(QApplication::translate("TTKMovingLabelWindow", "TTKMovingLabelWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKMovingLabelWindow: public Ui_TTKMovingLabelWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKMOVINGLABELWINDOW_H
