#ifndef STUDENTQ_H
#define STUDENTQ_H

#include <QWidget>
#include <QSqlQuery>

namespace Ui {
class studentQ;
}

class studentQ : public QWidget
{
    Q_OBJECT

public:
    explicit studentQ(QWidget *parent = nullptr);
    ~studentQ();

private slots:
    void on_pushButton_clicked();

private:
    Ui::studentQ *ui;
};

#endif // STUDENTQ_H
