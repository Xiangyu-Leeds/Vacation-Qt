#include "widget.h"
#include <QApplication> //应用程序类

int main(int argc, char *argv[])
{
    //a应用程序对象，在qt中，有且只有一个
    QApplication a(argc, argv);
    //窗口对象 widget父类-> qwidget
    Widget w;
    //窗口对象 默认不会显示，必须调用show方法显示窗口
    w.show();
    return a.exec();



}
