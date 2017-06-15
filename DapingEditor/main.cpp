#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QApplication::addLibraryPath("./plugins");
    w.show();

    return a.exec();
}
