#ifndef TEACHER_H
#define TEACHER_H

#include <QObject>

class Teacher : public QObject
{
public:
    explicit Teacher(QObject *parent = nullptr);

signals:
    //自定义信号 写到signals下
    //返回值为void，只需要声明，不需要实现
    //可以有参数，可以重载

public slots:
//    void(Teacher:: *teacherSignal)(void) = &Teacher::hungry;
     void hungry();

     void hungry(QString foodname);
};

#endif // TEACHER_H
