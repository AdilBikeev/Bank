#include "mainwindow.h"
#include "contribution.h"
#include <QApplication>
#include <QTextCodec>//библеотека кодировок

int main(int argc, char *argv[])
{


    QApplication a(argc, argv);
   MainWindow w;

    w.show();


    return a.exec();
}
