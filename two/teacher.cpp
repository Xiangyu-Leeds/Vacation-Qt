#include "teacher.h"
#include<QDebug>
Teacher::Teacher(QObject *parent) : QObject(parent)
{

}
void Teacher::hungry(){
    qDebug()<<"老师吃饭";

}
void Teacher::hungry(QString foodname){
    //QString->char * 先转成QBYTeARRAY再转char*
    qDebug()<<"老师吃饭，老师要吃:"<<foodname.toUtf8().data();
}
