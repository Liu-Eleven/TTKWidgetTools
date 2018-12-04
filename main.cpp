#include "mainwindow.h"
#include <QApplication>

/*
    增加一行注释，测试使用QtCreator上传。
*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    return a.exec();
}
