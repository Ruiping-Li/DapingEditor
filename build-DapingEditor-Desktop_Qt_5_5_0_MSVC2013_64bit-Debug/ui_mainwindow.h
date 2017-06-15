/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

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
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(443, 339);
        actionXinjian = new QAction(MainWindow);
        actionXinjian->setObjectName(QStringLiteral("actionXinjian"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/release/images/document-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionXinjian->setIcon(icon);
        actionDakai = new QAction(MainWindow);
        actionDakai->setObjectName(QStringLiteral("actionDakai"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/release/images/document-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDakai->setIcon(icon1);
        actionBaocun = new QAction(MainWindow);
        actionBaocun->setObjectName(QStringLiteral("actionBaocun"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/release/images/document-save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBaocun->setIcon(icon2);
        actionGuanbi = new QAction(MainWindow);
        actionGuanbi->setObjectName(QStringLiteral("actionGuanbi"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/release/images/gtk-close.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGuanbi->setIcon(icon3);
        actionTuichu = new QAction(MainWindow);
        actionTuichu->setObjectName(QStringLiteral("actionTuichu"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/release/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTuichu->setIcon(icon4);
        actionChazhao = new QAction(MainWindow);
        actionChazhao->setObjectName(QStringLiteral("actionChazhao"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/release/images/edit-find.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionChazhao->setIcon(icon5);
        actionShuoming = new QAction(MainWindow);
        actionShuoming->setObjectName(QStringLiteral("actionShuoming"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/prefix1/release/images/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShuoming->setIcon(icon6);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 443, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionXinjian->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272", 0));
        actionDakai->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", 0));
        actionBaocun->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", 0));
        actionGuanbi->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", 0));
        actionTuichu->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", 0));
        actionChazhao->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276", 0));
        actionShuoming->setText(QApplication::translate("MainWindow", "\350\257\264\346\230\216", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221", 0));
        menu_3->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
