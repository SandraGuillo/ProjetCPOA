#ifndef POINTDECOLLECTE_H
#define POINTDECOLLECTE_H
#include <QString>
#include <QDateTime>
#include "utilisateur/responsablepc.h"


class PointDeCollecte
{
private:
    /**
     * @brief nom du point de collecte
     */
    QString nom;
    /**
     * @brief adresse du point de collecte
     */
    QString adresse;
    /**
     * @brief le codePostal du point de collecte
     */
    int codePostal;
    /**
     * @brief dateFermeture du pc
     */
    QDateTime dateFermeture ;
    /**
     * @brief cycleEnJour donne le nombre de jour d'ouverture restant du point de collecte
     */
    int cycleEnJour;
    /**
    * @brief Le responsable du point de collecte.
    */
    utilisateur::responsablePC respo;//(const QString &email, const QString &motDePasse, const QString &nom, const QString &prenom) ;

public:
    /**
     * @brief PointDeCollecte
     * @param nom
     * @param adresse
     * @param codePostal
     * @param dateFermeture
     * @param cycleEnJour
     */

    PointDeCollecte(const QString &nom,const QString &adresse, const int &codePostal,const QDateTime &dateFermeture,const int &cycleEnJour,const utilisateur::responsablePC &resp);
    /**
     * @brief toString
     * @return les informations pour trouver le point de collecte
     */
    QString toString() const;
    /**
     * @brief getCodePostal
     * @return le codePostal du point de collecte
     */
    int getCodePostal() const;
};

#endif // POINTDECOLLECTE_H
