#ifndef EDUMANAGEMENTSYSTEM_H
#define EDUMANAGEMENTSYSTEM_H

#include <QWidget>
#include "studentinfosw.h"

namespace Ui {
class EDUManagementSystem;
}

class EDUManagementSystem : public QWidget
{
    Q_OBJECT

public:
    explicit EDUManagementSystem(QWidget *parent = 0);
    ~EDUManagementSystem();

public slots:
    void slotLoginSuccess(QString id);

private slots:
    void on_pushButton_clicked();

private:
    Ui::EDUManagementSystem *ui;
    StudentInfosW *studentInfosW;

};

#endif // EDUMANAGEMENTSYSTEM_H
