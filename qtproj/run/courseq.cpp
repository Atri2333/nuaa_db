#include "courseq.h"
#include "ui_courseq.h"
#include "global.h"

courseq::courseq(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::courseq)
{
    ui->setupUi(this);
}

courseq::~courseq()
{
    delete ui;
}

void courseq::on_pushButton_clicked()
{
    QString cno = ui->lineEdit->text();
    QString q1 = QString("select * from course where cno = %1").arg(cno);
    QSqlQuery query(db);
    query.exec(q1);
    if(!query.next()){
        QMessageBox::warning(this, "错误", "未找到课程信息！");
    }else{
        QString cname = query.value(1).toString();
        QString ccredit = query.value(2).toString();
        QString cpno = query.value(3).toString();
        ui->cnameEdit->setText(cname);
        ui->ccreditEdit->setText(ccredit);
        ui->cpnoEdit->setText(cpno);
    }
}

