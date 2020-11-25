#include "mainwindow.h"

#include <QApplication>
#include <qfontdatabase.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QFontDatabase::addApplicationFont(":/resources/fonts/p5hatty.ttf");
    QFontDatabase::addApplicationFont(":/resources/fonts/bahnschrift.ttf");
    return a.exec();
}
