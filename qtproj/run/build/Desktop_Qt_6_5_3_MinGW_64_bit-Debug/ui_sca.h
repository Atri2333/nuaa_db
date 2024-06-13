/********************************************************************************
** Form generated from reading UI file 'sca.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCA_H
#define UI_SCA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_scA
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *cnoEdit;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *gradeEdit;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *semesterEdit;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *classEdit;
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *snoEdit;

    void setupUi(QWidget *scA)
    {
        if (scA->objectName().isEmpty())
            scA->setObjectName("scA");
        scA->resize(451, 401);
        layoutWidget = new QWidget(scA);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(100, 120, 241, 29));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        cnoEdit = new QLineEdit(layoutWidget);
        cnoEdit->setObjectName("cnoEdit");

        horizontalLayout_2->addWidget(cnoEdit);

        layoutWidget_2 = new QWidget(scA);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(100, 170, 241, 29));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        gradeEdit = new QLineEdit(layoutWidget_2);
        gradeEdit->setObjectName("gradeEdit");

        horizontalLayout_3->addWidget(gradeEdit);

        layoutWidget_3 = new QWidget(scA);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(100, 220, 241, 29));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        semesterEdit = new QLineEdit(layoutWidget_3);
        semesterEdit->setObjectName("semesterEdit");

        horizontalLayout_4->addWidget(semesterEdit);

        layoutWidget_4 = new QWidget(scA);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(100, 270, 241, 29));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_4);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        classEdit = new QLineEdit(layoutWidget_4);
        classEdit->setObjectName("classEdit");

        horizontalLayout_5->addWidget(classEdit);

        pushButton = new QPushButton(scA);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(170, 330, 101, 28));
        widget = new QWidget(scA);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(100, 70, 241, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        snoEdit = new QLineEdit(widget);
        snoEdit->setObjectName("snoEdit");

        horizontalLayout->addWidget(snoEdit);


        retranslateUi(scA);

        QMetaObject::connectSlotsByName(scA);
    } // setupUi

    void retranslateUi(QWidget *scA)
    {
        scA->setWindowTitle(QCoreApplication::translate("scA", "\346\267\273\345\212\240\351\200\211\350\257\276\350\256\260\345\275\225", nullptr));
        label_2->setText(QCoreApplication::translate("scA", "\350\257\267\350\276\223\345\205\245\350\257\276\347\250\213\345\217\267\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("scA", "\350\257\267\350\276\223\345\205\245\346\210\220\347\273\251\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("scA", "\350\257\267\350\276\223\345\205\245\345\255\246\346\234\237\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("scA", "\350\257\267\350\276\223\345\205\245\346\225\231\345\255\246\347\217\255\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("scA", "\346\267\273\345\212\240\351\200\211\350\257\276\350\256\260\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("scA", "\350\257\267\350\276\223\345\205\245\345\255\246\345\217\267\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class scA: public Ui_scA {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCA_H
