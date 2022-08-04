#include "widget.h"
#include <QPushButton>
#include<mypushbutton.h>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
//    //创建一个按钮
   QPushButton * btn = new QPushButton;
//    btn->show();
    btn->setParent(this);
    btn->setText("第一个按钮");

    QPushButton * btn2 =new QPushButton("第二个按钮",this);
    //充值窗口大小
    resize(600,400);
    //固定大小
    setFixedSize(600,400);
    //移动
    btn2->move(100,100);
    btn2->resize(50,50);

    setWindowTitle("第一个窗口");


    //创建一个自己的按钮对象
    mypushbutton * mybtn=new mypushbutton;
    mybtn->setText("我自己的按钮");
    mybtn->move(200,0);
    mybtn->setParent(this);//设置到对象树中


    //需求 点击我的按钮 关闭窗口
    //参数一 信号发送者 参数二 发送的信号 (函数地址） 参数三 信号接收者 信号四 处理的槽函数
//    connect(mybtn, &QPushButton::clicked, this, &QWidget::close);  这是它的父类，也可以通过父类访问，因为继承父类函数
    connect(mybtn,&mypushbutton::clicked,this,&Widget::close);


}

Widget::~Widget()
{

}

