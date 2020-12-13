#ifndef PRODUIT_H
#define PRODUIT_H
#include <QString>
/**
 * @brief The UniteQuantitative enum la classe qui va permettre de quantifier le produit
 * @author Sandra GUILLO
 */
enum class UniteQuantitative
{
    Kilo,Litre,gramme,unite
};
/**
 * @brief The Produit class la classe qui gère les produits
 */
class Produit
{
private:
    int identifiant;
    int iddispo ;
    QString nom ;
    QString lienImage;
    int prix;
    UniteQuantitative unit;
public:
    /**
     * @brief Produit le constructeur d'un produit
     * @param nom du produit
     * @param lienImage le lien de l'image du produit
     * @param prix du produit
     * @param unit unite de quantite vendu
     */
    Produit(QString nom,QString lienImage,int prix,UniteQuantitative unit);
};

#endif // PRODUIT_H
