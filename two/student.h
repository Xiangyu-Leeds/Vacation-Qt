#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>

class Student : public QObject
{
public:
    explicit Student(QObject *parent = nullptr);

signals:

    //高级版本可以写到public或者全局下
    //返回值 void ，需要声明也需要实现
    //可以有参数，可以进行重载

public slots:
    void treat();
    void treat(QString foodname);
};

#endif // STUDENT_H
