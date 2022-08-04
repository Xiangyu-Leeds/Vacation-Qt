#ifndef WIDGET_H
#define WIDGET_H
#include "teacher.h"
#include "student.h"
#include <QWidget>
#include <QObject>
//QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
//QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

public:
    Ui::Widget *ui;
    Teacher *zt;
    Student *st;

    void classisover();
};
#endif // WIDGET_H
