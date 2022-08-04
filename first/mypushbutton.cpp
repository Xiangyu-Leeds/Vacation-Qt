#include "mypushbutton.h"
#include <QDebug>
mypushbutton::mypushbutton(QWidget *parent) : QPushButton(parent)
{
    qDebug()<<"我的调用";
}

mypushbutton::~mypushbutton(){
     qDebug()<<"我的析构";
}
