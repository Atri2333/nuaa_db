#include "studentm.h"
#include "ui_studentm.h"
#include "global.h"

studentM::studentM(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::studentM)
{
    ui->setupUi(this);
    ui->snameEdit->setReadOnly(true);
    ui->smajorEdit->setReadOnly(true);
    ui->ssexEdit->setReadOnly(true);
    ui->yearEdit->setReadOnly(true);
    ui->monthEdit->setReadOnly(true);
    ui->dayEdit->setReadOnly(true);
    ui->modifyButton->setEnabled(false);
}

studentM::~studentM()
{
    delete ui;
}

void studentM::on_queryButton_clicked()
{
    QString sno = ui->lineEdit->text();
    QString q1 = QString("select * from student where sno = %1").arg(sno);
    QSqlQuery query(db);
    query.exec(q1);
    if(!query.next()){
        QMessageBox::warning(this, "错误", "未找到学生信息！");
    }else{
        QMessageBox::information(this, "提示", QString("修改 %1 学生信息！").arg(sno));
        QString name = query.value(1).toString();
        QString sex = query.value(2).toString();
        QString birth = query.value(3).toString();
        QString major = query.value(4).toString();
        QStringList bir = birth.split("-");
        ui->snameEdit->setText(name);
        ui->ssexEdit->setText(sex);
        ui->yearEdit->setText(bir[0]);
        ui->monthEdit->setText(bir[1]);
        ui->dayEdit->setText(bir[2]);
        ui->smajorEdit->setText(major);

        ui->snameEdit->setReadOnly(false);
        ui->smajorEdit->setReadOnly(false);
        ui->ssexEdit->setReadOnly(false);
        ui->yearEdit->setReadOnly(false);
        ui->monthEdit->setReadOnly(false);
        ui->dayEdit->setReadOnly(false);
        ui->lineEdit->setReadOnly(true);
        ui->modifyButton->setEnabled(true);
    }
}


void studentM::on_modifyButton_clicked()
{
    QString sno = ui->lineEdit->text();
    QString sname = ui->snameEdit->text();
    QString ssex = ui->ssexEdit->text();
    QString year = ui->yearEdit->text();
    QString month = ui->monthEdit->text();
    QString day = ui->dayEdit->text();
    QString smajor = ui->smajorEdit->text();

    QSqlQuery query(db);
    QString q1 = QString("update student set sname = '%1', ssex = '%2', sbirthdate = DATE '%3-%4-%5', smajor = '%6' where sno = '%7'")
                     .arg(sname).arg(ssex).arg(year).arg(month).arg(day).arg(smajor).arg(sno);
    qDebug() << q1;
    if(!query.exec(q1)){
        QMessageBox::warning(this, "错误", "修改失败！");
    }else{
        QMessageBox::information(this, "提示", "修改成功！");
        ui->snameEdit->setReadOnly(true); ui->snameEdit->clear();
        ui->smajorEdit->setReadOnly(true); ui->smajorEdit->clear();
        ui->ssexEdit->setReadOnly(true); ui->ssexEdit->clear();
        ui->yearEdit->setReadOnly(true); ui->yearEdit->clear();
        ui->monthEdit->setReadOnly(true); ui->monthEdit->clear();
        ui->dayEdit->setReadOnly(true); ui->dayEdit->clear();
        ui->modifyButton->setEnabled(false);
        ui->lineEdit->setReadOnly(false);
    }

}

