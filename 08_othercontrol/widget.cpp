#include "widget.h"
#include "ui_widget.h"
#include<QMovie>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //栈控件使用
    //设置默认定位 scrollArea
     ui->stackedWidget->setCurrentIndex(1);
    //scrollArea按钮
    connect(ui->btn_ScrollArea,&QPushButton::clicked,[=](){
       ui->stackedWidget->setCurrentIndex(1);

    });
    //toolBox
    connect(ui->btn_ToolBox,&QPushButton::clicked,[=](){
       ui->stackedWidget->setCurrentIndex(2);
    });
    //tabwidget
    connect(ui->btn_Tabwidget,&QPushButton::clicked,[=](){
       ui->stackedWidget->setCurrentIndex(0);
    });
    //下拉框
    ui->comboBox->addItem("奔驰");
    ui->comboBox->addItem("宝马");
    ui->comboBox->addItem("拖拉机");

    //点击按钮 选中拖拉机选项
    connect(ui->btn_select,&QPushButton::clicked,[=](){
//        ui->comboBox->setCurrentIndex(2);
        ui->comboBox->setCurrentText("拖拉机");
    });

    //利用Qlabel 显示图片
//    ui->IbI_Image->setPixmap(QPixmap());

    //利用Qlabel显示 gif动态图片
//    QMovie * movie =new QMovie()
//    ui->IbI_movie->setMovie(movie);
    //播放动图
//    movie->start();
}

Widget::~Widget()
{
    delete ui;
}

