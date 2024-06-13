#include "sca.h"
#include "ui_sca.h"
#include "global.h"

scA::scA(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::scA)
{
    ui->setupUi(this);
}

scA::~scA()
{
    delete ui;
}

void scA::on_pushButton_clicked()
{
    QString sno = ui->snoEdit->text();
    QString cno = ui->cnoEdit->text();
    QString grade = ui->gradeEdit->text();
    QString semester = ui->semesterEdit->text();
    QString tclass = ui->classEdit->text();
    QSqlQuery query(db);
    QString q;
    q = QString("insert into sc values ('%1', '%2', '%3', '%4', '%5')").arg(sno).arg(cno).arg(grade).arg(semester).arg(tclass);
    qDebug() << q;
    if(query.exec(q)){
        QMessageBox::information(this, "提示", "插入成功！");
    }else{
        QMessageBox::warning(this, "错误", "插入失败！");
    }

}

