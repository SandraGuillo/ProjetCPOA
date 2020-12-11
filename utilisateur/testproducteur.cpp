#include "testproducteur.h"

TestProducteur::TestProducteur()
{

}
void TestProducteur::test(){
    //la definition du producteur d'un point de collecte
    const QString mail = "bob@free.fr";
    const QString mdp = "bobo54";
    const QString nom = "LEponge";
    const QString prenom = "Bob";
    Producteur prod(mail, mdp, nom, prenom);
    std::cout<<"test producteur :" << prod.toString().toStdString() << std::endl;
}
