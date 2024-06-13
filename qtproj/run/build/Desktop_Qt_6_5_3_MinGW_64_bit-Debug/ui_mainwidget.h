/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWidget
{
public:
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *studentQButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *courseAButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *courseQButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *studentAButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *studentMButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *scAButton;

    void setupUi(QWidget *mainWidget)
    {
        if (mainWidget->objectName().isEmpty())
            mainWidget->setObjectName("mainWidget");
        mainWidget->resize(695, 380);
        label = new QLabel(mainWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 50, 411, 81));
        widget = new QWidget(mainWidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(140, 180, 409, 114));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        studentQButton = new QPushButton(widget);
        studentQButton->setObjectName("studentQButton");

        horizontalLayout->addWidget(studentQButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        courseAButton = new QPushButton(widget);
        courseAButton->setObjectName("courseAButton");

        horizontalLayout->addWidget(courseAButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        courseQButton = new QPushButton(widget);
        courseQButton->setObjectName("courseQButton");

        horizontalLayout->addWidget(courseQButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 38, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        studentAButton = new QPushButton(widget);
        studentAButton->setObjectName("studentAButton");

        horizontalLayout_2->addWidget(studentAButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        studentMButton = new QPushButton(widget);
        studentMButton->setObjectName("studentMButton");

        horizontalLayout_2->addWidget(studentMButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        scAButton = new QPushButton(widget);
        scAButton->setObjectName("scAButton");

        horizontalLayout_2->addWidget(scAButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(mainWidget);

        QMetaObject::connectSlotsByName(mainWidget);
    } // setupUi

    void retranslateUi(QWidget *mainWidget)
    {
        mainWidget->setWindowTitle(QCoreApplication::translate("mainWidget", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("mainWidget", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:700;\">\345\255\246\347\224\237\351\200\211\350\257\276\347\256\241\347\220\206\347\263\273\342\231\202\347\273\237</span></p></body></html>", nullptr));
        studentQButton->setText(QCoreApplication::translate("mainWidget", "\346\237\245\350\257\242\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        courseAButton->setText(QCoreApplication::translate("mainWidget", "\346\267\273\345\212\240\350\257\276\347\250\213\344\277\241\346\201\257", nullptr));
        courseQButton->setText(QCoreApplication::translate("mainWidget", "\346\237\245\350\257\242\350\257\276\347\250\213\344\277\241\346\201\257", nullptr));
        studentAButton->setText(QCoreApplication::translate("mainWidget", "\346\267\273\345\212\240\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        studentMButton->setText(QCoreApplication::translate("mainWidget", "\344\277\256\346\224\271\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        scAButton->setText(QCoreApplication::translate("mainWidget", "\346\267\273\345\212\240\351\200\211\350\257\276\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainWidget: public Ui_mainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
