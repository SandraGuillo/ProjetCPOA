#ifndef PRODUIT_H
#define PRODUIT_H
#include <QString>

enum class UniteQuantitative
{
    Kilo,Litre,gramme,unite
};

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
    Produit(QString nom,QString lienImage,int prix,UniteQuantitative unit);
};

#endif // PRODUIT_H
