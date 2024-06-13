#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include "studentq.h"
#include "courseq.h"
#include "coursea.h"
#include "studenta.h"
#include "studentm.h"
#include "sca.h"

namespace Ui {
class mainWidget;
}

class mainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit mainWidget(QWidget *parent = nullptr);
    ~mainWidget();

private slots:
    void on_studentQButton_clicked();

    void on_courseQButton_clicked();

    void on_courseAButton_clicked();

    void on_studentAButton_clicked();

    void on_studentMButton_clicked();

    void on_scAButton_clicked();

private:
    Ui::mainWidget *ui;
    studentQ *sq;
    courseq *cq;
    courseA *ca;
    studentA *sa;
    studentM *sm;
    scA *sca;
};

#endif // MAINWIDGET_H
