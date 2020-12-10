#ifndef POINTDECOLLECTE_H
#define POINTDECOLLECTE_H
#include <QString>
#include <QDateTime>
#include "utilisateur/responsablepc.h"
#include "pc/etatpointdecollecte.h"

/**
 * @brief The PointDeCollecte class qui permet la gestion du point de collecte
 */
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
    /**
     * @brief etatpc l'etat du point de collecte
     */
    //EtatPointDeCollecte etatpc ;

public:
    /**
     * @brief PointDeCollecte
     * @param nom le nom du point de collecte
     * @param adresse l'adresse du point de collecte
     * @param codePostal le code postal du point de collecte
     * @param dateFermeture la date de fermeture du point de collecte
     * @param cycleEnJour le nombre de jour restant de l'ouverture du point de collecte
     */

    PointDeCollecte(const QString &nom,const QString &adresse, const int &codePostal,const QDateTime &dateFermeture,const int &cycleEnJour,const utilisateur::responsablePC &resp);
    /**
     * @brief toString la fonction qui va permettre d'afficher les informations du point de collecte
     * @return les informations pour trouver le point de collecte
     */
    QString toString() const;
    /**
     * @brief getCodePostal la fonction qui permet de connaitre le code postal du point de collecte
     * @return le codePostal du point de collecte
     */
    int getCodePostal() const;
};

#endif // POINTDECOLLECTE_H
