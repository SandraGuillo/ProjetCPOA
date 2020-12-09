#include "pointdecollecte.h"

PointDeCollecte::PointDeCollecte(const QString &nom,const QString &adresse, const int &codePostal,const QDateTime &dateFermeture,const int &cycleEnJour,const utilisateur::responsablePC &resp):nom(nom),adresse(adresse),codePostal(codePostal),dateFermeture(dateFermeture),cycleEnJour(cycleEnJour),respo(resp)
{

}

      //fonction d'affichage des information du point de collecte
QString PointDeCollecte::toString() const{
    QString aff = " "+nom+" "+adresse+" "+codePostal;
    return aff;
}

int PointDeCollecte::getCodePostal() const{
    return codePostal;
}


