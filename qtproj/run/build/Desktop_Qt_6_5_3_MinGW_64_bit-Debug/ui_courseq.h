/********************************************************************************
** Form generated from reading UI file 'courseq.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSEQ_H
#define UI_COURSEQ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_courseq
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *ccreditEdit;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *cpnoEdit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *cnameEdit;

    void setupUi(QWidget *courseq)
    {
        if (courseq->objectName().isEmpty())
            courseq->setObjectName("courseq");
        courseq->resize(502, 386);
        layoutWidget = new QWidget(courseq);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(140, 180, 151, 29));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        ccreditEdit = new QLineEdit(layoutWidget);
        ccreditEdit->setObjectName("ccreditEdit");
        ccreditEdit->setReadOnly(true);

        horizontalLayout_4->addWidget(ccreditEdit);

        layoutWidget_2 = new QWidget(courseq);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(140, 230, 211, 29));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName("label_4");

        horizontalLayout_5->addWidget(label_4);

        cpnoEdit = new QLineEdit(layoutWidget_2);
        cpnoEdit->setObjectName("cpnoEdit");
        cpnoEdit->setReadOnly(true);

        horizontalLayout_5->addWidget(cpnoEdit);

        widget = new QWidget(courseq);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(70, 80, 357, 31));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        horizontalLayout_2->addLayout(horizontalLayout);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        horizontalLayout_2->addWidget(pushButton);

        widget1 = new QWidget(courseq);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(140, 130, 211, 29));
        horizontalLayout_3 = new QHBoxLayout(widget1);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        cnameEdit = new QLineEdit(widget1);
        cnameEdit->setObjectName("cnameEdit");
        cnameEdit->setReadOnly(true);

        horizontalLayout_3->addWidget(cnameEdit);


        retranslateUi(courseq);

        QMetaObject::connectSlotsByName(courseq);
    } // setupUi

    void retranslateUi(QWidget *courseq)
    {
        courseq->setWindowTitle(QCoreApplication::translate("courseq", "\346\237\245\350\257\242\350\257\276\347\250\213", nullptr));
        label_3->setText(QCoreApplication::translate("courseq", "\345\255\246\345\210\206\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("courseq", "\345\205\210\344\277\256\350\257\276\347\250\213\345\217\267\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("courseq", "\350\257\267\350\276\223\345\205\245\350\257\276\347\250\213\345\217\267\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("courseq", "\346\237\245\350\257\242", nullptr));
        label_2->setText(QCoreApplication::translate("courseq", "\350\257\276\347\250\213\345\220\215\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class courseq: public Ui_courseq {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSEQ_H
