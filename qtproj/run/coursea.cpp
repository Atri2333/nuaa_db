#include "coursea.h"
#include "ui_coursea.h"
#include "global.h"

courseA::courseA(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::courseA)
{
    ui->setupUi(this);
    ui->cpnoEdit->setReadOnly(true);
}

courseA::~courseA()
{
    delete ui;
}

void courseA::on_radioButton_pressed()
{
    // ui->cpnoEdit->setReadOnly(false);
}


void courseA::on_radioButton_released()
{
    // ui->cpnoEdit->clear();
    // ui->cpnoEdit->setReadOnly(true);
}


void courseA::on_radioButton_toggled(bool checked)
{
    if(checked == true){
        ui->cpnoEdit->setReadOnly(false);
    }else{
        ui->cpnoEdit->clear();
        ui->cpnoEdit->setReadOnly(true);
    }
}


void courseA::on_pushButton_clicked()
{
    QString cno = ui->cnoEdit->text();
    QString cname = ui->cnameEdit->text();
    QString ccredit = ui->ccreditEdit->text();
    QSqlQuery query(db);
    QString q;
    if(ui->radioButton->isChecked()){
        QString cpno = ui->cpnoEdit->text();
        q = QString("insert into course values('%1', '%2', %3, '%4')").arg(cno).arg(cname).arg(ccredit).arg(cpno);
    }else{
        q = QString("insert into course values('%1', '%2', %3, NULL)").arg(cno).arg(cname).arg(ccredit);
    }
    qDebug() << q;
    if(query.exec(q)){
        QMessageBox::information(this, "提示", "插入成功！");
    }else{
        QMessageBox::warning(this, "错误", "插入失败！");
    }
}

