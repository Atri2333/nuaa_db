/********************************************************************************
** Form generated from reading UI file 'studenta.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTA_H
#define UI_STUDENTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studentA
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *snameEdit;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *ssexEdit;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *monthEdit;
    QLabel *label_6;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *dayEdit;
    QLabel *label_7;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *majorEdit;
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *snoEdit;
    QLabel *label_4;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *yearEdit;
    QLabel *label_5;

    void setupUi(QWidget *studentA)
    {
        if (studentA->objectName().isEmpty())
            studentA->setObjectName("studentA");
        studentA->resize(509, 447);
        layoutWidget = new QWidget(studentA);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(110, 100, 271, 29));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        snameEdit = new QLineEdit(layoutWidget);
        snameEdit->setObjectName("snameEdit");

        horizontalLayout_2->addWidget(snameEdit);

        layoutWidget_2 = new QWidget(studentA);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(110, 150, 271, 29));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        ssexEdit = new QLineEdit(layoutWidget_2);
        ssexEdit->setObjectName("ssexEdit");

        horizontalLayout_3->addWidget(ssexEdit);

        layoutWidget_3 = new QWidget(studentA);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(200, 230, 81, 29));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        monthEdit = new QLineEdit(layoutWidget_3);
        monthEdit->setObjectName("monthEdit");

        horizontalLayout_5->addWidget(monthEdit);

        label_6 = new QLabel(layoutWidget_3);
        label_6->setObjectName("label_6");

        horizontalLayout_5->addWidget(label_6);

        layoutWidget_4 = new QWidget(studentA);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(300, 230, 81, 29));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        dayEdit = new QLineEdit(layoutWidget_4);
        dayEdit->setObjectName("dayEdit");

        horizontalLayout_6->addWidget(dayEdit);

        label_7 = new QLabel(layoutWidget_4);
        label_7->setObjectName("label_7");

        horizontalLayout_6->addWidget(label_7);

        layoutWidget_5 = new QWidget(studentA);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(110, 290, 271, 29));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_5);
        label_8->setObjectName("label_8");

        horizontalLayout_7->addWidget(label_8);

        majorEdit = new QLineEdit(layoutWidget_5);
        majorEdit->setObjectName("majorEdit");

        horizontalLayout_7->addWidget(majorEdit);

        pushButton = new QPushButton(studentA);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(200, 360, 92, 28));
        widget = new QWidget(studentA);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(110, 50, 271, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        snoEdit = new QLineEdit(widget);
        snoEdit->setObjectName("snoEdit");

        horizontalLayout->addWidget(snoEdit);

        label_4 = new QLabel(studentA);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(110, 200, 120, 19));
        widget1 = new QWidget(studentA);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(110, 230, 81, 29));
        horizontalLayout_4 = new QHBoxLayout(widget1);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        yearEdit = new QLineEdit(widget1);
        yearEdit->setObjectName("yearEdit");

        horizontalLayout_4->addWidget(yearEdit);

        label_5 = new QLabel(widget1);
        label_5->setObjectName("label_5");

        horizontalLayout_4->addWidget(label_5);


        retranslateUi(studentA);

        QMetaObject::connectSlotsByName(studentA);
    } // setupUi

    void retranslateUi(QWidget *studentA)
    {
        studentA->setWindowTitle(QCoreApplication::translate("studentA", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        label_2->setText(QCoreApplication::translate("studentA", "\350\257\267\350\276\223\345\205\245\345\255\246\347\224\237\345\247\223\345\220\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("studentA", "\350\257\267\350\276\223\345\205\245\345\255\246\347\224\237\346\200\247\345\210\253\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("studentA", "\346\234\210", nullptr));
        label_7->setText(QCoreApplication::translate("studentA", "\346\227\245", nullptr));
        label_8->setText(QCoreApplication::translate("studentA", "\350\257\267\350\276\223\345\205\245\345\255\246\347\224\237\344\270\223\344\270\232\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("studentA", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        label->setText(QCoreApplication::translate("studentA", "\350\257\267\350\276\223\345\205\245\345\255\246\347\224\237\345\255\246\345\217\267\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("studentA", "\350\257\267\350\276\223\345\205\245\345\255\246\347\224\237\347\224\237\346\227\245\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("studentA", "\345\271\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class studentA: public Ui_studentA {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTA_H
