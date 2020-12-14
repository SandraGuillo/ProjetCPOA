#include "pointdecollecte.h"

PointDeCollecte::PointDeCollecte() : nom(""), adresse(""), codePostal(0), dateFermeture(QDateTime()), cycleEnJour(0), respo(utilisateur::responsablePC()) {
}
//constructeur du point de collecte
PointDeCollecte::PointDeCollecte(const QString &nom,const QString &adresse, const int &codePostal,const QDateTime &dateFermeture,const int &cycleEnJour,const utilisateur::responsablePC &resp):nom(nom),adresse(adresse),codePostal(codePostal),dateFermeture(dateFermeture),cycleEnJour(cycleEnJour),respo(resp)
{
    etatpc = nullptr;
}

//fonction d'affichage des information du point de collecte
QString PointDeCollecte::toString() const{
    QString aff = " "+nom+" "+adresse+" "+codePostal;
    return aff;
}
//fonction qui permet de modifier le cycle de vente
void PointDeCollecte::modifierCycleVente(int c){
    cycleEnJour = c;
}
//fonction qui permet d'ouvrir un point de collecte
void PointDeCollecte::ouvrir(){
    etatpc->ouvrir();
}
//fonction qui permet de retrouver le code postal du point de collecte
int PointDeCollecte::getCodePostal() const{
    return codePostal;
}
//fonction qui permet de retrouver le cycle de vente du point de collecte
int PointDeCollecte::getCycle() const{
    return cycleEnJour;
}
//fonction qui modifie l'etat du point de collecte
void PointDeCollecte::setEtatPointDeCollecte(EtatPointDeCollecte *nouveauEtat){
    etatpc = nouveauEtat;
}


