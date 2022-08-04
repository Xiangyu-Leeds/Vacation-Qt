#include "widget.h"
#include "ui_widget.h"
#include<QPainter>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //点击移动按钮，移动图片
    connect(ui->pushButton,&QPushButton::clicked,[=](){
            //如果要手动调用绘图事件 用update更新
          posx+=20;
        update();
    });
}
void Widget::painterEvent(QPaintEvent *){
    //实例画家对象  this指定的是绘图设备
//    QPainter painter(this);

//    //设置画笔
//    QPen pen(QColor(255,0,0));
//    //设置画笔宽度
//    pen.setWidth(3);
//    //设置画笔风格
//    pen.setStyle(Qt::DotLine);
//    //让画家 使用这个笔
//    painter.setPen(pen);

//    //设置画刷
////    QBrush brush(QColor(0,255,0));
//    QBrush brush(Qt::cyan);
//    //设置画刷风格
//    brush.setStyle(Qt::Dense7Pattern);
//    //让画家使用画刷
//    painter.setBrush(brush);
//    painter.drawLine(QPoint(0,0),QPoint(100,100));

//    //画圆  椭圆
//    painter.drawEllipse(QPoint(100,100),50,50);

//    //画矩形
//    painter.drawRect(QRect(20,20,50,50));

//    //画文字
//    painter.drawText(QRect(10,200,100,50),"好好学习，天天向上");


    /////////高级设置//////
//    QPainter painter(this);
////    painter.drawEllipse(QPoint(100,50),50,50);
////    //设置 抗锯齿能力 效率较低
////    painter.setRenderHint(QPainter::Antialiasing);
////    painter.drawEllipse(QPoint(200,50),50,50);
//    //画一个矩形
//    painter.drawRect(QRect(20,20,50,50));

//    //移动画家
//    painter.translate(100,0);

//    //保存画家状态
//    painter.save();

//    painter.drawRect(QRect(20,20,50,50));

//    painter.translate(100,0);

//    //还原画家的保存状态
//    painter.restore();
//    painter.drawRect(QRect(20,20,50,50));


    ////////////////利用画家直接画资源图片////////////////////
    QPainter painter(this);
    //如果超出了屏幕 从0开始
    if(posx>this->width()){
        posx=0;
    }

    painter.drawPixmap(posx,100,QPixmap("图片地址"));




}

Widget::~Widget()
{
    delete ui;
}

