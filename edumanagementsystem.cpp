#include "edumanagementsystem.h"
#include "ui_edumanagementsystem.h"

#include "stufileoperation.h"

#include "stufileoperation.h"
#include <QFileDialog>
#include <QDebug>

EDUManagementSystem::EDUManagementSystem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EDUManagementSystem)
{
    ui->setupUi(this);
    m_studentInfosW = new StudentInfosW;

    connect(this, SIGNAL(signalGetStuinfoFromStuinfow()),
            m_studentInfosW, SLOT(slotGetStuinfoFromStuinfow()));

    connect(m_studentInfosW, SIGNAL(signalSendStuinfoToEduManguagement(QTableWidget*)),
            this, SLOT(slotSendStuinfoToEduManguagement(QTableWidget*)));
}

EDUManagementSystem::~EDUManagementSystem()
{
    delete ui;
}

void EDUManagementSystem::slotSendStuinfoToEduManguagement(QTableWidget *tbw)
{
    m_stutbw = tbw;
}

void EDUManagementSystem::slotLoginSuccess(QString id)
{
    this->setWindowTitle(id);
    this->show();
}

void EDUManagementSystem::on_pb_stumangement_clicked()
{
    m_studentInfosW->setWindowTitle("学生信息");
    m_studentInfosW->show();
}

void EDUManagementSystem::on_pb_studataoutput_clicked()
{
    emit signalGetStuinfoFromStuinfow();
    QString fileName = QFileDialog::getSaveFileName(this,
          tr("Open Image"), "/home/", tr("Image Files (*.xls)"));
    StuFileOperation stuFile;
    stuFile.OutPutStuInfos(fileName, m_stutbw);

}
