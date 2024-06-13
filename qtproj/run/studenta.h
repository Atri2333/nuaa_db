#ifndef STUDENTA_H
#define STUDENTA_H

#include <QWidget>
#include <QSqlQuery>

namespace Ui {
class studentA;
}

class studentA : public QWidget
{
    Q_OBJECT

public:
    explicit studentA(QWidget *parent = nullptr);
    ~studentA();

private slots:
    void on_pushButton_clicked();

private:
    Ui::studentA *ui;
};

#endif // STUDENTA_H
