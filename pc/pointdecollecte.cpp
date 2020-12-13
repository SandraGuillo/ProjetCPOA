#include "pointdecollecte.h"

PointDeCollecte::PointDeCollecte() : nom(""), adresse(""), codePostal(0), dateFermeture(QDateTime()), cycleEnJour(0), respo(utilisateur::responsablePC()) {}//listeProducteur(QList<Producteur>);
//constructeur du point de collecte
PointDeCollecte::PointDeCollecte(const QString &nom,const QString &adresse, const int &codePostal,const QDateTime &dateFermeture,const int &cycleEnJour,const utilisateur::responsablePC &resp):nom(nom),adresse(adresse),codePostal(codePostal),dateFermeture(dateFermeture),cycleEnJour(cycleEnJour),respo(resp)
{
    //listeProducteur(QList<Producteur>);
}

//fonction d'affichage des information du point de collecte
QString PointDeCollecte::toString() const{
    QString aff = " "+nom+" "+adresse+" "+codePostal;
    return aff;
}
//fonction qui permet de retrouver le code postal du point de collecte
int PointDeCollecte::getCodePostal() const{
    return codePostal;
}


