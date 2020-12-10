#include "responsablepc.h"

using namespace utilisateur;

    responsablePC::responsablePC(const QString &email, const QString &motDePasse, const QString &nom, const QString &prenom) : Utilisateur::Utilisateur(email,motDePasse,nom,prenom)
    {

    }
    //fonction d'affichage
    QString responsablePC::responsablePC::toString() const{
        QString res="ResponsablePC: ";
        return res.append(Utilisateur::toString());

    }
    /*PointDeCollecte creerPC(const QString &nom){
        //PointDeCollecte pc
    }*/
