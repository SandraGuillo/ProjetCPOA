#ifndef PRODUCTEUR_H
#define PRODUCTEUR_H
#include "pc/pointdecollecte.h"
#include "utilisateur/utilisateur.h"
#include <QString>

/**
 * @brief The Producteur class la classe qui permet de gerer ce qui concerne les producteur
 */
class Producteur : public utilisateur::Utilisateur
{
private:
    QList<PointDeCollecte> listPC ;
public:
    /**
     * @brief Producteur le constructeur du producteur
     */
    Producteur(const QString &email, const QString &mdp, const QString &nom, const QString &prenom);
    /**
     * @brief ajouterPC la fonction qui permet d'ajouter un point de collecte
     * @param pc le point de collecte choisie
     */
    //void ajouterPC(PointDeCollecte pc);
    /**
     * @brief toString la fonction d'affichage des informations du producteur
     * @return les informations du producteur dans un QString
     */
    QString toString() const;
};

#endif // PRODUCTEUR_H
