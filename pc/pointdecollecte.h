#ifndef POINTDECOLLECTE_H
#define POINTDECOLLECTE_H

//#include "pc/etatpointdecollecte.h"
#include "utilisateur/responsablepc.h"

#include "pc/venteencours.h"
#include "pc/produit.h"
#include <QList>
#include <QString>
#include <QDateTime>

/*
namespace utilisateur {
class responsablePC ;
}
*/
/**
 * @brief The PointDeCollecte class qui permet la gestion du point de collecte
 * @author Sandra GUILLO, Khaled SADEGH
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
    EtatPointDeCollecte *etatpc ;
    /**
     * @brief listeProducteur la liste des producteur du point de collecte
     */
    QList<Produit> listeProduit;
    //Producteur p;

public:
    /**
     * @brief Constructeur par default
     */
    PointDeCollecte();
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
     * @brief ModifierCycleVente la fonction qui permet de modifier le cycle de vente du point de collecte
     * @param c le nouveau cycle de vente
     */
    void modifierCycleVente(int c);
    /**
     * @brief ouvrir la fonction qui va ouvrir point de collecte en fonction de son etat
     */
    void ouvrir();
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
    /**
     * @brief getCycle la fonction qui permet de connaitre le cycle de vente du point de collecte
     * @return le cycleVente du point de collecte
     */
    int getCycle() const;
    /**
     * @brief ouvrir la fonction qui va permettre de modifier l'etat du point de collecte
     */
    void setEtatPointDeCollecte(EtatPointDeCollecte *nouveauEtat);
    /**
     * @brief ajouterProduit fonction qui permet d'ajouter des produit sur une liste de produit
     * @param p le produit a ajouter
     */
    void ajouterProduit(Produit p);
};

#endif // POINTDECOLLECTE_H
