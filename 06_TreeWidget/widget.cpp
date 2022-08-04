#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //treewidget树控件的使用
    //设置水平头
    ui->treeWidget->setHeaderLabels(QStringList()<<"英雄"<<"英雄介绍");

    QTreeWidgetItem * item = new QTreeWidgetItem(QStringList()<<"力量");
     QTreeWidgetItem * item1 = new QTreeWidgetItem(QStringList()<<"敏捷");
      QTreeWidgetItem * item2 = new QTreeWidgetItem(QStringList()<<"智力");
    //加载顶层节点
    ui->treeWidget->addTopLevelItem(item);
    ui->treeWidget->addTopLevelItem(item1);
    ui->treeWidget->addTopLevelItem(item2);

    //追加子节点
    QStringList herol1;
    herol1<<"猪"<<"前排坦克";
    QTreeWidgetItem * l1 = new QTreeWidgetItem(herol1);
    item->addChild(l1);

}

Widget::~Widget()
{
    delete ui;
}

