#include "responsablepc.h"

using namespace utilisateur;

    /*responsablePC(const QString &email, const QString &motDePasse, const QString &nom, const QString &prenom):email(email), mot_de_passe(mdp), nom(nom), prenom(prenom)
    {

    }*/
    //fonction d'affichage
    QString responsablePC::responsablePC::toString() const{
        QString res="ResponsablePC: ";
        return res.append(Utilisateur::toString());

    }
