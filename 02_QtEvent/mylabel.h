#ifndef MYLABEL_H
#define MYLABEL_H

#include <QLabel>

class myLabel : public QLabel
{
public:
    explicit myLabel(QWidget *parent = nullptr);
    //鼠标进入事件
    void enterEvent(QEvent *);
    //鼠标离开事件
    void leaveEvent(QEvent *);


    //鼠标按下
     void mousePressEvent(QMouseEvent *ev);

     //鼠标释放
     void mouseReleaseEvent(QMouseEvent *ev);

     //鼠标移动
     void mouseMoveEvent(QMouseEvent *ev);

     //通过event事件分发器 拦截 鼠标的按下事件
     bool event(QEvent *e);
signals:

};

#endif // MYLABEL_H
