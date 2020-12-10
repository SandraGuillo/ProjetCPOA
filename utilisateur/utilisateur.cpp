#include "utilisateur/utilisateur.h"

//constructeur d'un utilisateur
utilisateur::Utilisateur::Utilisateur(const QString &email, const QString &mdp, const QString &nom, const QString &prenom) : email(email), mot_de_passe(mdp), nom(nom), prenom(prenom)
{

}
//fonction qui permet d'afficher les informations de l'utilisateur concerne
QString utilisateur::Utilisateur::toString() const {
    QString res=" "+email+" "+nom+" "+prenom;
    return res;
}
//fonction qui permet de recuperer l'email d'un utilisateur
QString utilisateur::Utilisateur::getEmail() const {
    return email;
}
