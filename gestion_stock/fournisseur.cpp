#include<QString>
#include<QSqlQuery>
#include<QDebug>
#include<QSqlQueryModel>
#include<QObject>
#include "fournisseur.h"

fournisseur::fournisseur()
{

    ID_F=0;
    NOM_F="";
    PRENOM_F="";
    ADDRESS_F="";
    MAIL_F="";
    TEL_F=0;
    PRODUIT_F="";

    }

    fournisseur::fournisseur(int ID_F , QString NOM_F, QString PRENOM_F , QString ADRESS_F , QString MAIL_F , int TEL_F , QString PRODUIT_F  )
    {
        this->ID_F = ID_F ;
        this->NOM_F = NOM_F ;
        this->PRENOM_F = PRENOM_F ;
        this->ADDRESS_F = ADRESS_F ;
        this->MAIL_F = MAIL_F ;
        this-> TEL_F = TEL_F ;
        this->PRODUIT_F = PRODUIT_F ;
    }

    void fournisseur::setID_F(int n){ID_F = n;}
    void fournisseur::setNOM_F(QString n) ){NOM_Fx = n; }
    void fournisseur::setPRENOM_F(QString n){PRENOM_F = n; }
    void fournisseur::setADRESS_F(QString n) {ADRESS_F = n; }
    void fournisseur::setMAIL_F(QString n) {MAIL_F = n; }
    void fournisseur::setTEL_F(int n ){TEL_F = n; }
    void fournisseur::setPRODUIT_F(QString n){PRODUIT_F = n; }

    int fournisseur::getID_F(){return ID_F;}
    QString fournisseur::getNOM_F (){return NOM_F ;}
    QString fournisseur::getPRENOM_F (){return PRENOM_F ;}
    QString fournisseur::getADRESS_F (){return ADRESS_F;}
    QString fournisseur::getMAIL_F (){return MAIL_F ;}
    int fournisseur::getTEL_F (){return TEL_F ;}
    QString fournisseur::getPRODUIT_F (){return PRODUIT_F ;}

}
