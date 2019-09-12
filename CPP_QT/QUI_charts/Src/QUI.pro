#-------------------------------------------------
#
# Project created by QtCreator 2014-07-29T15:28:37
#
#-------------------------------------------------

QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QUI
TEMPLATE = app


SOURCES += main.cpp\
        frmmain.cpp \
    iconhelper.cpp \
    qcustomplot.cpp \
    frmplot.cpp

HEADERS  += frmmain.h \
    iconhelper.h \
    qcustomplot.h \
    frmplot.h

FORMS    += frmmain.ui \
    frmplot.ui
