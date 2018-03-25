#include "edumanagementsystem.h"
#include "ui_edumanagementsystem.h"

EDUManagementSystem::EDUManagementSystem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EDUManagementSystem)
{
    ui->setupUi(this);
    studentInfosW = new StudentInfosW;
}

EDUManagementSystem::~EDUManagementSystem()
{
    delete ui;
}

void EDUManagementSystem::slotLoginSuccess(QString id)
{
    this->setWindowTitle(id);
    this->show();
}

void EDUManagementSystem::on_pushButton_clicked()
{
    studentInfosW->setWindowTitle("学生信息");
    studentInfosW->show();
}
