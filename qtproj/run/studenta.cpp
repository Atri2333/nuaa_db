#include "studenta.h"
#include "ui_studenta.h"
#include "global.h"

studentA::studentA(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::studentA)
{
    ui->setupUi(this);
}

studentA::~studentA()
{
    delete ui;
}

void studentA::on_pushButton_clicked()
{
    QString sno = ui->snoEdit->text();
    QString sname = ui->snameEdit->text();
    QString ssex = ui->ssexEdit->text();
    QString year = ui->yearEdit->text();
    QString month = ui->monthEdit->text();
    QString day = ui->dayEdit->text();
    QString smajor = ui->majorEdit->text();
    QSqlQuery query(db);
    QString q = QString("insert into student values('%1', '%2', '%3', DATE '%4-%5-%6', '%7')").arg(sno).arg(sname).arg(ssex).arg(year)
                    .arg(month).arg(day).arg(smajor);
    if(query.exec(q)){
        QMessageBox::information(this, "提示", "添加成功！");
    }else{
        QMessageBox::warning(this, "错误", "添加失败！");
    }
}

