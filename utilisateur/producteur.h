#ifndef PRODUCTEUR_H
#define PRODUCTEUR_H
#include "pc/pointdecollecte.h"
#include "pc/produit.h"
#include "utilisateur/utilisateur.h"
#include <QString>
#include <QList>

/**
 * @brief The Producteur class la classe qui permet de gerer ce qui concerne les producteur
 * @author Sandra GUILLO
 */
class Producteur : public utilisateur::Utilisateur
{
private:
    //QList<PointDeCollecte> listPC ;
public:
    /**
     * @brief Constructeur par default
     */
    Producteur();
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
     * @brief ajouterProduit fonction qui peut ajouter un produit
     * @param produit le produit souhaite
     */
    //void ajouterProduit(Produit produit);
    /**
     * @brief toString la fonction d'affichage des informations du producteur
     * @return les informations du producteur dans un QString
     */
    QString toString() const;
};

#endif // PRODUCTEUR_H
