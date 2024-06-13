#include "widget.h"
#include "ui_widget.h"
#include "global.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->pwdEdit->setEchoMode(QLineEdit::Password);
    db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("localhost");
    // modify these
    db.setDatabaseName("student_course");
    db.setUserName("root");
    db.setPassword("114514");
    //
    if (!db.open())
        qDebug() << "Failed to connect to root mysql admin" ;
    else qDebug() << "open";
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_loginButton_clicked()
{
    QString username = ui->loginEdit->text();
    QString password = ui->pwdEdit->text();
    QSqlQuery query(db);
    db.exec("SET NAMES 'GBK'");
    query.exec("select id, username, password from admin");
    bool flag = false;
    while(query.next()){
        QString user = query.value(1).toString();
        QString pass = query.value(2).toString();
        if(username.compare(user) == 0 && password.compare(pass) == 0){
            flag = true;
            login_user = user;
            break;
        }
    }
    if(!flag){
        QMessageBox::warning(this, "登陆失败", "账号或密码输入错误！");
    }else{
        QMessageBox::information(this, "登录成功", QString("欢迎！%1!").arg(login_user));
        m = new mainWidget;
        this->hide();
        m->show();
    }
}

