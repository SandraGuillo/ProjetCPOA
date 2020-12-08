#include "utilisateur/utilisateur.h"

utilisateur::Utilisateur::Utilisateur(const QString &email, const QString &mdp, const QString &nom, const QString &prenom) : email(email), mot_de_passe(mdp), nom(nom), prenom(prenom)
{

}
QString utilisateur::Utilisateur::toString() const {
    QString res=" "+email+" "+nom+" "+prenom;
    return res;
}
QString utilisateur::Utilisateur::getEmail() const {
    return email;
}
