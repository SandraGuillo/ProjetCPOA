#include "responsablepc.h"

using namespace utilisateur;
responsablePC::responsablePC() : Utilisateur("", "", "", "") {}

    //constructeur du responsable d'un point de collecte
    responsablePC::responsablePC(const QString &email, const QString &motDePasse, const QString &nom, const QString &prenom) : Utilisateur::Utilisateur(email,motDePasse,nom,prenom)
    {

    }
    //fonction d'affichage des informations du responsable du point de collecte
    QString responsablePC::responsablePC::toString() const{
        QString res="ResponsablePC: ";
        return res.append(Utilisateur::toString());

    }
    /*void creerPC(const QString &nom,const QString &adresse, const int &codePostal,const QDateTime &dateFermeture,const int &cycleEnJour){
        dao::DaoPointDeCollecte dpc;
        dpc.create(PointDeCollecte::PointDeCollecte());


    }*/
