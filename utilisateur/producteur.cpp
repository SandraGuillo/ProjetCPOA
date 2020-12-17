#include "producteur.h"
#include "pc/produit.h"

Producteur::Producteur() : Utilisateur::Utilisateur("","","","") {}//listPC(QList<PointDeCollecte>);
//constructeur d'un producteur
Producteur::Producteur(const QString &email, const QString &mdp, const QString &nom, const QString &prenom) : Utilisateur::Utilisateur(email,mdp,nom,prenom)
{
    //listPC(QList<PointDeCollecte>);
}
//fonction qui permet de regarder les informations d'un producteur
QString Producteur::toString() const{
    QString affichage = "Producteur : ";
    return affichage.append(Utilisateur::toString());
}
