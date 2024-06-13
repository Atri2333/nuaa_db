#ifndef STUDENTM_H
#define STUDENTM_H

#include <QWidget>
#include <QSqlQuery>

namespace Ui {
class studentM;
}

class studentM : public QWidget
{
    Q_OBJECT

public:
    explicit studentM(QWidget *parent = nullptr);
    ~studentM();

private slots:
    void on_queryButton_clicked();

    void on_modifyButton_clicked();

private:
    Ui::studentM *ui;
};

#endif // STUDENTM_H
