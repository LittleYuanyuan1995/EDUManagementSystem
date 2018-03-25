#include "edumanagementsystem.h"
#include <QApplication>
#include "connectdatabase.h"
#include "loginw.h"
#include <QDebug>

#include "studentinfosw.h"
#include "stufileoperation.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ConnectDatabase db;

    LoginW loginw;
    EDUManagementSystem Mainw;

    QObject::connect(&loginw, SIGNAL(signalLoginSuccess(QString)),
                     &Mainw, SLOT(slotLoginSuccess(QString)));

//    Mainw.show();
    loginw.show();

//    StuFileOperation st;
//    st.newExcel("hello.xl");
    return a.exec();
}
