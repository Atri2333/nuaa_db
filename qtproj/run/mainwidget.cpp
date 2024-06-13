#include "mainwidget.h"
#include "ui_mainwidget.h"

mainWidget::mainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::mainWidget)
{
    ui->setupUi(this);
}

mainWidget::~mainWidget()
{
    delete ui;
}

void mainWidget::on_studentQButton_clicked()
{
    sq = new studentQ;
    sq->show();
}


void mainWidget::on_courseQButton_clicked()
{
    cq = new courseq;
    cq->show();
}


void mainWidget::on_courseAButton_clicked()
{
    ca = new courseA;
    ca->show();
}


void mainWidget::on_studentAButton_clicked()
{
    sa = new studentA;
    sa->show();
}


void mainWidget::on_studentMButton_clicked()
{
    sm = new studentM;
    sm->show();
}


void mainWidget::on_scAButton_clicked()
{
    sca = new scA;
    sca->show();
}

