#include "widget.h"
#include "ui_widget.h"
#include<QPushButton>
#include<QtDebug>
//Teacher 类
//Student 类
//下课后老师会触发一个信号，饿了，学生响应信号，请客吃饭

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //创建一个老师对象
    this->zt=new Teacher(this);
    //在创建一个学生对象
    this->st=new Student(this);

    //老师饿了 学生请客
//    connect(zt,&Teacher::hungry,st,&Student::treat);
//    classisover();
    //连接带参数的 信号和槽
    //指针->地址
    //函数指针-》函数地址
//    void(Teacher::*teacherSignal)(QString)=&Teacher::hungry;
//    void(Student::*studentSlot)(QString)=&Student::treat;
//        connect(zt,&Teacher::hungry,st,&Student::treat);
//    void (Teacher::*teacherSignal)(QString) = &Teacher::hungry;
    void(Teacher:: *teacherSignal)(QString) = &Teacher::hungry;
     void (Student::*studentSlot)(QString) = &Student::treat;
      connect(zt,teacherSignal,st,studentSlot);
        //classisover();

        //点击一个下课按钮
    QPushButton *btn =new QPushButton("下课",this);
    resize(600,400);
    //点击按钮，触发下课
   //  connect(btn,&QPushButton::clicked,this,&Widget::classisover);  //这里的this指的是widget

    //无参信号和槽连接
    void(Teacher:: *teacherSignal2)(void) = &Teacher::hungry;
     void (Student::*studentSlot2)(void) = &Student::treat;
      connect(zt,teacherSignal2,st,studentSlot2);



      //信号连接信号
    connect(btn,&QPushButton::clicked,zt,teacherSignal2);

      //断开信号
    disconnect(zt,teacherSignal2,st,studentSlot2);
    //拓展
    //一个信号可以连接多个槽函数
    //多个信号可以连接多个槽函数
    //信号和槽函数的参数 必须类型一一对应
    //信号和槽的参数个数 信号的个数可以多余槽函数的参数个数

    //QT4版本以前信号和槽连接
    //利用qt4连接无参
    //
    connect(zt,SIGNAL(hungry()),st,SLOT(treat()));
    //优点：参数直观 缺点：类型不做检测

    QPushButton *btn2 = new QPushButton;
    [btn](){
        btn->setText("aaaa");
//        btn2->setText("bbb"); //btn2是看不到的
    }();
    
    [=](){
        btn->setText("aaaa");
    }();
    
    QPushButton *mybtn = new QPushButton (this);
    QPushButton *mybtn2 = new QPushButton (this);
    mybtn2->move(100,100);
    int m =10;
    connect(mybtn,&QPushButton::clicked,this,[m]()mutable{m=100+10;qDebug()<<m;});
     connect(mybtn2,&QPushButton::clicked,this,[=](){m=100+10;qDebug()<<m;});
    qDebug()<<m;
    int ret = []()->int{
        return 100;
    }();
   qDebug()<<"ret= "<<ret;
   //利用lambda表达式实现点击按钮关闭窗口
   QPushButton *btn2 = new QPushButton;
   btn2->setText("关闭");
   btn2->move(100,0);
   btn2->setParent(this);
   connect(btn2,&QPushButton::clicked,this,[=](){//this可以省略
       this->close();
        emit zt->hungry("宫保鸡丁");
   });
}

void Widget::classisover()
{
    //下课函数 调用 触发老师饿了
//    emit zt->hungry();
    emit zt->hungry("宫保鸡丁");
}

Widget::~Widget()
{
    delete ui;
}

