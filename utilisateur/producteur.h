#ifndef PRODUCTEUR_H
#define PRODUCTEUR_H
//#include "pc/pointdecollecte.h"
//#include "pc/produit.h"
#include "utilisateur/utilisateur.h"
#include <QString>
#include <QList>

/**
 * @brief The Producteur class la classe qui permet de gerer ce qui concerne les producteur
 * @author Sandra GUILLO
 */
class PointDeCollecte;
class Produit;

class Producteur : public utilisateur::Utilisateur
{
private:
    //QList<PointDeCollecte> listPC ;
    //QList<Produit> listeProduit ;
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
     * @brief ajouterProduit fonction qui peut ajouter un produit dans un point de collecte donné
     * @param produit le produit souhaite
     * @param le point de collecte ou l'on veut mettre le produit
     */
    //void ajouterProduitdansPC(Produit produit,PointDeCollecte pc);
    /*

    */
    /**
     * @brief toString la fonction d'affichage des informations du producteur
     * @return les informations du producteur dans un QString
     */
    QString toString() const;
};

#endif // PRODUCTEUR_H
