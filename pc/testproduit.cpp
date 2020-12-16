#include "testproduit.h"
//constructeur du test de produit
TestProduit::TestProduit()
{
    std::cout << "test produit" ;
}
//fonction qui test tout ce qui concerne produit
void TestProduit::test(){
    QString nom = "biere";
    QString lienImage = "test/image/biere.png";
    int prix = 6;
    UniteQuantitative unit {UniteQuantitative::Litre};
    Produit p(nom,lienImage,prix,unit);
    std::cout << nom.toStdString() << std::endl;
}
