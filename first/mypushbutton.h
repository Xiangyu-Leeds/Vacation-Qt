#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QPushButton>

class mypushbutton : public QPushButton
{
    Q_OBJECT
public:
    explicit mypushbutton(QWidget *parent = nullptr);
//    mypushbutton();
    ~mypushbutton();
signals:

};

#endif // MYPUSHBUTTON_H
