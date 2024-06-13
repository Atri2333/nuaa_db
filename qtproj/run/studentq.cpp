#include "studentq.h"
#include "ui_studentq.h"
#include "global.h"
#include <QSqlTableModel>

studentQ::studentQ(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::studentQ)
{
    ui->setupUi(this);
}

studentQ::~studentQ()
{
    delete ui;
}

void studentQ::on_pushButton_clicked()
{
    QString sno = ui->lineEdit->text();
    QString q1 = QString("select * from student where sno = %1").arg(sno);
    QSqlQuery query(db);
    query.exec(q1);
    if(!query.next()){
        QMessageBox::warning(this, "错误", "未找到学生信息！");
    }else{
        QString name = query.value(1).toString();
        QString sex = query.value(2).toString();
        QString birth = query.value(3).toString();
        QString major = query.value(4).toString();
        ui->nameEdit->setText(name);
        ui->sexEdit->setText(sex);
        ui->birthEdit->setText(birth);
        ui->majorEdit->setText(major);

        QSqlQueryModel *model = new QSqlQueryModel(ui->tableView);
        QString q2 = QString("select c.cno, cname, grade, ccredit, cpno from student s, sc, course c where s.sno = sc.sno and c.cno = sc.cno and s.sno = %1").arg(sno);
        model->setQuery(q2, db);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("课程号"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("课程名"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("课程成绩"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("课程学分"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("先修课程号"));

        query.exec(q2);
        if(!query.next()){
            qDebug() << "FUCK!";
        }

        ui->tableView->setModel(model);
    }
}

