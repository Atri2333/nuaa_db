/********************************************************************************
** Form generated from reading UI file 'studentq.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTQ_H
#define UI_STUDENTQ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studentQ
{
public:
    QTableView *tableView;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *nameEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *sexEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *birthEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *majorEdit;

    void setupUi(QWidget *studentQ)
    {
        if (studentQ->objectName().isEmpty())
            studentQ->setObjectName("studentQ");
        studentQ->resize(568, 496);
        tableView = new QTableView(studentQ);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(40, 250, 471, 211));
        widget = new QWidget(studentQ);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(80, 60, 387, 30));
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

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        widget1 = new QWidget(studentQ);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(80, 110, 391, 105));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget1);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        nameEdit = new QLineEdit(widget1);
        nameEdit->setObjectName("nameEdit");
        nameEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(nameEdit);


        horizontalLayout_7->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(widget1);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        sexEdit = new QLineEdit(widget1);
        sexEdit->setObjectName("sexEdit");
        sexEdit->setReadOnly(true);

        horizontalLayout_3->addWidget(sexEdit);


        horizontalLayout_7->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(widget1);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        birthEdit = new QLineEdit(widget1);
        birthEdit->setObjectName("birthEdit");
        birthEdit->setReadOnly(true);

        horizontalLayout_4->addWidget(birthEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(widget1);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        majorEdit = new QLineEdit(widget1);
        majorEdit->setObjectName("majorEdit");
        majorEdit->setReadOnly(true);

        horizontalLayout_6->addWidget(majorEdit);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(studentQ);

        QMetaObject::connectSlotsByName(studentQ);
    } // setupUi

    void retranslateUi(QWidget *studentQ)
    {
        studentQ->setWindowTitle(QCoreApplication::translate("studentQ", "\345\255\246\347\224\237\344\277\241\346\201\257\346\237\245\350\257\242", nullptr));
        label->setText(QCoreApplication::translate("studentQ", "\350\257\267\350\276\223\345\205\245\345\255\246\345\217\267\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("studentQ", "\346\237\245\342\231\202\350\257\242", nullptr));
        label_2->setText(QCoreApplication::translate("studentQ", "\345\247\223\345\220\215\357\274\232", nullptr));
        nameEdit->setInputMask(QString());
        label_3->setText(QCoreApplication::translate("studentQ", "\346\200\247\345\210\253\357\274\232", nullptr));
        sexEdit->setInputMask(QString());
        label_4->setText(QCoreApplication::translate("studentQ", "\347\224\237\346\227\245\357\274\232", nullptr));
        birthEdit->setInputMask(QString());
        label_6->setText(QCoreApplication::translate("studentQ", "\344\270\223\344\270\232\357\274\232", nullptr));
        majorEdit->setInputMask(QString());
    } // retranslateUi

};

namespace Ui {
    class studentQ: public Ui_studentQ {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTQ_H
