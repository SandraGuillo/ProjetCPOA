#include "produit.h"
#include "utilisateur/producteur.h"
//constructeur d'un produit qui va permettre d'ajouter un produit dans un point de collecte plus tard
Produit::Produit(QString nom,QString lienImage,int prix,UniteQuantitative unit):nom(nom),lienImage(lienImage),prix(prix),unit(unit)
{
    identifiant = 1;
    iddispo = 10;
}


Produit::Produit(QString nom,QString lienImage,int prix,UniteQuantitative unit,Producteur producteur):nom(nom),lienImage(lienImage),prix(prix),unit(unit),producteur(producteur)
{
    identifiant = 1;
    iddispo = 10;
}
