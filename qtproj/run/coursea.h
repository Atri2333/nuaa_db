#ifndef COURSEA_H
#define COURSEA_H

#include <QWidget>
#include <QSqlQuery>

namespace Ui {
class courseA;
}

class courseA : public QWidget
{
    Q_OBJECT

public:
    explicit courseA(QWidget *parent = nullptr);
    ~courseA();

private slots:
    void on_radioButton_pressed();

    void on_radioButton_released();

    void on_radioButton_toggled(bool checked);

    void on_pushButton_clicked();

private:
    Ui::courseA *ui;
};

#endif // COURSEA_H
