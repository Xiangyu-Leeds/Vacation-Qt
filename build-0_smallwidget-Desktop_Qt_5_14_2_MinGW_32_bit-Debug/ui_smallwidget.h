/********************************************************************************
** Form generated from reading UI file 'smallwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMALLWIDGET_H
#define UI_SMALLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Smallwidget
{
public:
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox;
    QSlider *horizontalSlider;

    void setupUi(QWidget *Smallwidget)
    {
        if (Smallwidget->objectName().isEmpty())
            Smallwidget->setObjectName(QString::fromUtf8("Smallwidget"));
        Smallwidget->resize(217, 40);
        horizontalLayout = new QHBoxLayout(Smallwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinBox = new QSpinBox(Smallwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout->addWidget(spinBox);

        horizontalSlider = new QSlider(Smallwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);


        retranslateUi(Smallwidget);

        QMetaObject::connectSlotsByName(Smallwidget);
    } // setupUi

    void retranslateUi(QWidget *Smallwidget)
    {
        Smallwidget->setWindowTitle(QCoreApplication::translate("Smallwidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Smallwidget: public Ui_Smallwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMALLWIDGET_H
