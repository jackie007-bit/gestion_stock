#ifndef FOURNISSEUR_H
#define FOURNISSEUR_H
#include<QString>
#include<QSqlQuery>
#include<QDebug>
#include<QSqlQueryModel>
#include<QObject>
class fournisseur
{
public:
fournisseur();

    fournisseur  client(int, QString, QString, QString, QString, int,QString,int);

    void setID_F(int n );
    void setNOM_F(QString n );
    void setPRENOM_F(QString n );
    void setADRESS_F(QString n );
    void setMAIL_F(QString n );
    void setTEL_F(int  n );
    void setPRODUIT_F(QString n );
    void setID_produit(int n );


    int getID_F() ;
    QString getNOM_F() ;
    QString getPRENOM_F() ;
    QString getADRESS_F() ;
    QString getMAIL_F() ;
    int  getTEL_F() ;
    QString getPRODUIT_F();
     int getID_produit() ;

bool ajouter_fournisseur();
QSqlQueryModel* afficher_fournisseur();
bool supprimer_fournisseur(int );

private:
    int ID_F,TEL_F, ID_produit  ;
    QString  NOM_F, PRENOM_F,ADDRESS_F, MAIL_F, PRODUIT_F ;

};


#endif // FOURNISSEUR_H
