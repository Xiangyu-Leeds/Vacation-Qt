#include "student.h"
#include<QDebug>
Student::Student(QObject *parent) : QObject(parent)
{

}

void Student::treat(){
    qDebug()<<"请老师吃饭";

}
void Student::treat(QString foodname){
    //QString->char * 先转成QBYTeARRAY再转char*
    qDebug()<<"请老师吃饭，老师要吃:"<<foodname.toUtf8().data();
}
