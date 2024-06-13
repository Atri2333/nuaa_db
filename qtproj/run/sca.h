#ifndef SCA_H
#define SCA_H

#include <QWidget>
#include <QSqlQuery>

namespace Ui {
class scA;
}

class scA : public QWidget
{
    Q_OBJECT

public:
    explicit scA(QWidget *parent = nullptr);
    ~scA();

private slots:
    void on_pushButton_clicked();

private:
    Ui::scA *ui;
};

#endif // SCA_H
