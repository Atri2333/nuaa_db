#ifndef COURSEQ_H
#define COURSEQ_H

#include <QWidget>
#include <QSqlQuery>

namespace Ui {
class courseq;
}

class courseq : public QWidget
{
    Q_OBJECT

public:
    explicit courseq(QWidget *parent = nullptr);
    ~courseq();

private slots:
    void on_pushButton_clicked();

private:
    Ui::courseq *ui;
};

#endif // COURSEQ_H
