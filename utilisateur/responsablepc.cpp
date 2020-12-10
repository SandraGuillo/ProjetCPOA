#include "responsablepc.h"

using namespace utilisateur;
    //constructeur du responsable d'un point de collecte
    responsablePC::responsablePC(const QString &email, const QString &motDePasse, const QString &nom, const QString &prenom) : Utilisateur::Utilisateur(email,motDePasse,nom,prenom)
    {

    }
    //fonction d'affichage des informations du responsable du point de collecte
    QString responsablePC::responsablePC::toString() const{
        QString res="ResponsablePC: ";
        return res.append(Utilisateur::toString());

    }
    /*PointDeCollecte creerPC(const QString &nom){
        //PointDeCollecte pc
    }*/
