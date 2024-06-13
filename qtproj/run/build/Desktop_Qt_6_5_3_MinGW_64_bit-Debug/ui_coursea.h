/********************************************************************************
** Form generated from reading UI file 'coursea.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSEA_H
#define UI_COURSEA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_courseA
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *cnameEdit;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *ccreditEdit;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *cpnoEdit;
    QRadioButton *radioButton;
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *cnoEdit;

    void setupUi(QWidget *courseA)
    {
        if (courseA->objectName().isEmpty())
            courseA->setObjectName("courseA");
        courseA->resize(533, 388);
        layoutWidget = new QWidget(courseA);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(140, 110, 256, 29));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        cnameEdit = new QLineEdit(layoutWidget);
        cnameEdit->setObjectName("cnameEdit");

        horizontalLayout_2->addWidget(cnameEdit);

        layoutWidget_2 = new QWidget(courseA);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(140, 160, 256, 29));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        ccreditEdit = new QLineEdit(layoutWidget_2);
        ccreditEdit->setObjectName("ccreditEdit");

        horizontalLayout_3->addWidget(ccreditEdit);

        layoutWidget_3 = new QWidget(courseA);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(140, 240, 256, 29));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        cpnoEdit = new QLineEdit(layoutWidget_3);
        cpnoEdit->setObjectName("cpnoEdit");

        horizontalLayout_4->addWidget(cpnoEdit);

        radioButton = new QRadioButton(courseA);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(140, 200, 120, 25));
        pushButton = new QPushButton(courseA);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(230, 310, 92, 28));
        widget = new QWidget(courseA);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(140, 60, 256, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        cnoEdit = new QLineEdit(widget);
        cnoEdit->setObjectName("cnoEdit");

        horizontalLayout->addWidget(cnoEdit);


        retranslateUi(courseA);

        QMetaObject::connectSlotsByName(courseA);
    } // setupUi

    void retranslateUi(QWidget *courseA)
    {
        courseA->setWindowTitle(QCoreApplication::translate("courseA", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("courseA", "\350\257\267\350\276\223\345\205\245\350\257\276\347\250\213\345\220\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("courseA", "\350\257\267\350\276\223\345\205\245\350\257\276\347\250\213\345\255\246\345\210\206\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("courseA", "\350\257\267\350\276\223\345\205\245\345\205\210\344\277\256\350\257\276\347\250\213\345\217\267\357\274\232", nullptr));
        radioButton->setText(QCoreApplication::translate("courseA", "\346\230\257\345\220\246\346\234\211\345\205\210\344\277\256\350\257\276", nullptr));
        pushButton->setText(QCoreApplication::translate("courseA", "\346\267\273\345\212\240\350\257\276\347\250\213", nullptr));
        label->setText(QCoreApplication::translate("courseA", "\350\257\267\350\276\223\345\205\245\350\257\276\347\250\213\345\217\267\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class courseA: public Ui_courseA {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSEA_H
