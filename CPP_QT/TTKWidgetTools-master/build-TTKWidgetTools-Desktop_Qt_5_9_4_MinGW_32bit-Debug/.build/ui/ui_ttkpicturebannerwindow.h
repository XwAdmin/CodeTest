/********************************************************************************
** Form generated from reading UI file 'ttkpicturebannerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TTKPICTUREBANNERWINDOW_H
#define UI_TTKPICTUREBANNERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include "ttkpicturebannerwidget.h"

QT_BEGIN_NAMESPACE

class Ui_TTKPictureBannerWindow
{
public:
    TTKPictureBannerWidget *widget;

    void setupUi(QMainWindow *TTKPictureBannerWindow)
    {
        if (TTKPictureBannerWindow->objectName().isEmpty())
            TTKPictureBannerWindow->setObjectName(QStringLiteral("TTKPictureBannerWindow"));
        TTKPictureBannerWindow->resize(503, 349);
        widget = new TTKPictureBannerWidget(TTKPictureBannerWindow);
        widget->setObjectName(QStringLiteral("widget"));
        TTKPictureBannerWindow->setCentralWidget(widget);

        retranslateUi(TTKPictureBannerWindow);

        QMetaObject::connectSlotsByName(TTKPictureBannerWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TTKPictureBannerWindow)
    {
        TTKPictureBannerWindow->setWindowTitle(QApplication::translate("TTKPictureBannerWindow", "TTKPictureBannerWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TTKPictureBannerWindow: public Ui_TTKPictureBannerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TTKPICTUREBANNERWINDOW_H
