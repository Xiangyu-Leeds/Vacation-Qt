#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
#include<QtDebug>
#include<Qmessagebox.h>
#include<QColorDialog>
#include<QFileDialog>
#include<QFontDialog>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //点击新建按钮，弹出一个对话框
    connect(ui->actionnew,&QAction::triggered,[=](){
        //对话框 分类
        //模态对话框（不可以） 非模态（可以对其他窗口操作）
        //模态创建 阻塞
//        QDialog dlg(this);
//        dlg.resize(200,100);
//        dlg.exec();
//        qDebug()<<"模态对话框弹出了";
        //非模态对话框
//        QDialog * dlg2= new QDialog(this); //防止一闪而过，创立在堆区
//        dlg2->resize(200,100);
//        dlg2->show();
//        dlg2->setAttribute(Qt::WA_DeleteOnClose); //55号属性
//        qDebug()<<"非模态对话框弹出来";
        //消息对话框
        //错误对话框
        //QMessageBox::critical(this,"critical","错误");
        //信息对话框
        //QMessageBox::information(this,"information","信息");
        //提问对话框
        //参数1 父亲 参数2 标题 参数3 提示内容 参数4 按键类型 参数5 默认关联回车
//       if(QMessageBox::Save==QMessageBox::question(this,"question","提问",QMessageBox::Save|QMessageBox::Cancel,QMessageBox::Save|QMessageBox::Cancel)){
//           qDebug()<<"选择保存";
//       }
//                     else {
//                     qDebug()<<"选择取消";
//       }
        //警告对话框
        //QMessageBox::warning(this,"warning","警告");
        //其他标准对话框
        //颜色
//        QColor color =  QColorDialog::getColor(QColor(255,0,0));
//        qDebug()<<"r = "<<color.red()<<"g="<<color.green()<<"b="<<color.blue();
        //文件对话框 参数1 父亲 参数2 标题 参数3 默认打开路径 参数4 过滤文件格式
        //返回值是 选区的路径
//        QString str =  QFileDialog::getOpenFileName(this,"打开文件","C:\\Users\sxy\Desktop","(*.txt)");
//        qDebug()<<str;
        //字体对话框
        bool flag;
       QFont font= QFontDialog::getFont(&flag,QFont("华文彩云",36));
        qDebug()<<"字体:"<<font.family().toUtf8().data()<<"是否加粗"<<font.bold()<<"是否倾斜"<<font.italic();
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}
