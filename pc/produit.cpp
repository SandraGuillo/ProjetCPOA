#include "produit.h"

Produit::Produit(QString nom,QString lienImage,int prix,UniteQuantitative unit):nom(nom),lienImage(lienImage),prix(prix),unit(unit)
{
    identifiant = 1;
    iddispo = 10;
}
