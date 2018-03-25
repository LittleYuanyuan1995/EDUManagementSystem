#include "edumanagementsystem.h"
#include <QApplication>
#include "connectdatabase.h"
#include "loginw.h"
#include <QDebug>

#include "studentinfosw.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ConnectDatabase db;

    LoginW loginw;
    EDUManagementSystem Mainw;

    StudentInfosW stuw;

    QObject::connect(&loginw, SIGNAL(signalLoginSuccess(QString)),
                     &Mainw, SLOT(slotLoginSuccess(QString)));
    loginw.show();
    return a.exec();
}
