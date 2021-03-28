#include <QMessageBox>
#include <QApplication>
#include "mainwindow.h"
#include "connexion.h"


int main(int argc, char *argv[])
{


    QApplication a(argc, argv);


        connexion c;
        bool test=c.creatconnexion();
        MainWindow w;

        if(test)
        {w.show();
            QMessageBox::information(nullptr, QObject::tr("database is open"),
                        QObject::tr("connection successful amannn :'( .\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);

    }
        else
            QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                        QObject::tr("connection failed, al9a 7alll ya jhon .\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);



        return a.exec();
}
