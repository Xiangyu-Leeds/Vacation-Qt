#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

  //  ui->actionnew->setIcon(QIcon(""))
  //  手动添加Qt资源 ":+ 前缀名 +文件名 "


}

MainWindow::~MainWindow()
{
    delete ui;
}

