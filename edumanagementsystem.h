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


signals:
    void signalGetStuinfoFromStuinfow();

public slots:
    void slotLoginSuccess(QString id);

    void slotSendStuinfoToEduManguagement(QTableWidget *tbw);

private slots:
    void on_pb_stumangement_clicked();
    void on_pb_studataoutput_clicked();


private:
    Ui::EDUManagementSystem *ui;
    StudentInfosW *m_studentInfosW;

    QTableWidget *m_stutbw;

};

#endif // EDUMANAGEMENTSYSTEM_H
