/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionXinjian;
    QAction *actionDakai;
    QAction *actionBaocun;
    QAction *actionGuanbi;
    QAction *actionTuichu;
    QAction *actionChazhao;
    QAction *actionShuoming;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QLabel *label;
    QFrame *line;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_6;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(392, 348);
        actionXinjian = new QAction(MainWindow);
        actionXinjian->setObjectName(QString::fromUtf8("actionXinjian"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/release/images/document-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionXinjian->setIcon(icon);
        actionDakai = new QAction(MainWindow);
        actionDakai->setObjectName(QString::fromUtf8("actionDakai"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/release/images/document-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDakai->setIcon(icon1);
        actionBaocun = new QAction(MainWindow);
        actionBaocun->setObjectName(QString::fromUtf8("actionBaocun"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/release/images/document-save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBaocun->setIcon(icon2);
        actionGuanbi = new QAction(MainWindow);
        actionGuanbi->setObjectName(QString::fromUtf8("actionGuanbi"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/release/images/gtk-close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGuanbi->setIcon(icon3);
        actionTuichu = new QAction(MainWindow);
        actionTuichu->setObjectName(QString::fromUtf8("actionTuichu"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/release/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTuichu->setIcon(icon4);
        actionChazhao = new QAction(MainWindow);
        actionChazhao->setObjectName(QString::fromUtf8("actionChazhao"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/release/images/edit-find.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionChazhao->setIcon(icon5);
        actionShuoming = new QAction(MainWindow);
        actionShuoming->setObjectName(QString::fromUtf8("actionShuoming"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/release/images/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShuoming->setIcon(icon6);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 3);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 1, 3, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 2, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 2, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 3, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 392, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(actionXinjian);
        menu->addAction(actionDakai);
        menu->addAction(actionBaocun);
        menu->addAction(actionGuanbi);
        menu->addAction(actionTuichu);
        menu_2->addAction(actionChazhao);
        menu_3->addAction(actionShuoming);
        mainToolBar->addAction(actionXinjian);
        mainToolBar->addAction(actionDakai);
        mainToolBar->addAction(actionBaocun);
        mainToolBar->addAction(actionGuanbi);
        mainToolBar->addAction(actionChazhao);
        mainToolBar->addAction(actionTuichu);
        mainToolBar->addAction(actionShuoming);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionXinjian->setText(QApplication::translate("MainWindow", "New", 0, QApplication::UnicodeUTF8));
        actionDakai->setText(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
        actionBaocun->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
        actionGuanbi->setText(QApplication::translate("MainWindow", "Close", 0, QApplication::UnicodeUTF8));
        actionTuichu->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        actionChazhao->setText(QApplication::translate("MainWindow", "Find", 0, QApplication::UnicodeUTF8));
        actionShuoming->setText(QApplication::translate("MainWindow", "Note", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "First", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Second", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Third", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menu_2->setTitle(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        menu_3->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
