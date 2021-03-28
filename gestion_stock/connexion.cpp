#include "connexion.h"

connexion::connexion()
{

}
    bool  connexion::creatconnexion ()
    {bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Source_Projet2A");
    db.setUserName("system");
    db.setPassword("SYS");

    if (db.open())
    test=true;





        return  test;
    }

