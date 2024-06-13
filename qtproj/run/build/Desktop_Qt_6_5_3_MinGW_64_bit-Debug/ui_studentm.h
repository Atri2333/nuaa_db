/********************************************************************************
** Form generated from reading UI file 'studentm.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTM_H
#define UI_STUDENTM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studentM
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *ssexEdit;
    QLabel *label_4;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *monthEdit;
    QLabel *label_6;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *dayEdit;
    QLabel *label_7;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *smajorEdit;
    QPushButton *modifyButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *queryButton;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *snameEdit;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *yearEdit;
    QLabel *label_5;

    void setupUi(QWidget *studentM)
    {
        if (studentM->objectName().isEmpty())
            studentM->setObjectName("studentM");
        studentM->resize(630, 471);
        layoutWidget = new QWidget(studentM);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(160, 160, 256, 29));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        ssexEdit = new QLineEdit(layoutWidget);
        ssexEdit->setObjectName("ssexEdit");

        horizontalLayout_3->addWidget(ssexEdit);

        label_4 = new QLabel(studentM);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(160, 210, 111, 19));
        layoutWidget_2 = new QWidget(studentM);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(260, 250, 91, 29));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        monthEdit = new QLineEdit(layoutWidget_2);
        monthEdit->setObjectName("monthEdit");

        horizontalLayout_5->addWidget(monthEdit);

        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName("label_6");

        horizontalLayout_5->addWidget(label_6);

        layoutWidget_3 = new QWidget(studentM);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(360, 250, 91, 29));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        dayEdit = new QLineEdit(layoutWidget_3);
        dayEdit->setObjectName("dayEdit");

        horizontalLayout_6->addWidget(dayEdit);

        label_7 = new QLabel(layoutWidget_3);
        label_7->setObjectName("label_7");

        horizontalLayout_6->addWidget(label_7);

        layoutWidget_4 = new QWidget(studentM);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(160, 300, 256, 29));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_4);
        label_8->setObjectName("label_8");

        horizontalLayout_7->addWidget(label_8);

        smajorEdit = new QLineEdit(layoutWidget_4);
        smajorEdit->setObjectName("smajorEdit");

        horizontalLayout_7->addWidget(smajorEdit);

        modifyButton = new QPushButton(studentM);
        modifyButton->setObjectName("modifyButton");
        modifyButton->setGeometry(QRect(250, 360, 92, 28));
        widget = new QWidget(studentM);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(120, 50, 375, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        queryButton = new QPushButton(widget);
        queryButton->setObjectName("queryButton");

        horizontalLayout->addWidget(queryButton);

        widget1 = new QWidget(studentM);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(160, 110, 256, 29));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        snameEdit = new QLineEdit(widget1);
        snameEdit->setObjectName("snameEdit");

        horizontalLayout_2->addWidget(snameEdit);

        widget2 = new QWidget(studentM);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(160, 250, 91, 29));
        horizontalLayout_4 = new QHBoxLayout(widget2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        yearEdit = new QLineEdit(widget2);
        yearEdit->setObjectName("yearEdit");

        horizontalLayout_4->addWidget(yearEdit);

        label_5 = new QLabel(widget2);
        label_5->setObjectName("label_5");

        horizontalLayout_4->addWidget(label_5);


        retranslateUi(studentM);

        QMetaObject::connectSlotsByName(studentM);
    } // setupUi

    void retranslateUi(QWidget *studentM)
    {
        studentM->setWindowTitle(QCoreApplication::translate("studentM", "\344\277\256\346\224\271\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        label_3->setText(QCoreApplication::translate("studentM", "\344\277\256\346\224\271\345\255\246\347\224\237\346\200\247\345\210\253\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("studentM", "\344\277\256\346\224\271\345\255\246\347\224\237\347\224\237\346\227\245\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("studentM", "\346\234\210", nullptr));
        label_7->setText(QCoreApplication::translate("studentM", "\346\227\245", nullptr));
        label_8->setText(QCoreApplication::translate("studentM", "\344\277\256\346\224\271\345\255\246\347\224\237\344\270\223\344\270\232\357\274\232", nullptr));
        modifyButton->setText(QCoreApplication::translate("studentM", "\344\277\256\346\224\271\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("studentM", "\350\257\267\350\276\223\345\205\245\345\255\246\345\217\267\357\274\232", nullptr));
        queryButton->setText(QCoreApplication::translate("studentM", "\346\237\245\350\257\242", nullptr));
        label_2->setText(QCoreApplication::translate("studentM", "\344\277\256\346\224\271\345\255\246\347\224\237\345\247\223\345\220\215\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("studentM", "\345\271\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class studentM: public Ui_studentM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTM_H
