#-------------------------------------------------
#
# Project created by QtCreator 2016-03-01T22:45:38
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DapingEditor
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    logindialog.cpp

HEADERS  += mainwindow.h \
    logindialog.h

FORMS    += mainwindow.ui \
    logindialog.ui

RESOURCES += \
    ../build-DapingEditor-Desktop_Qt_5_5_0_MSVC2013_64bit-Release/dapingresource.qrc
RC_ICONS = configBundle.fontCom.ico
