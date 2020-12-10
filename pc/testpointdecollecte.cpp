#include "pc/testpointdecollecte.h"

//constructeur du test qui concerne le point de collecte
testPointDeCollecte::testPointDeCollecte()
{
    std::cout << "test pc ok" ;
}
//la fonction de test qui va verifier la gestion du point de collecte
void testPointDeCollecte::test(){
    //les informations du responsable du point de collecte
    const QString mail = "bob@free.fr";
    const QString mdp = "bobo54";
    const QString nom = "LEponge";
    const QString prenom = "Bob";
    utilisateur::responsablePC resp(mail, mdp, nom, prenom);
    //la construction du point de collecte
    const QString nompc = "friperie" ;
    const QString adresse = "rue du cookie" ;
    const int codePostal = 54500 ;
    QDateTime date = QDateTime();
    const int cycleEnJour = 3 ;
    PointDeCollecte pc(nompc,adresse,codePostal,date, cycleEnJour,resp);
    std::cout<<"test"<< pc.toString().toStdString() <<std::endl;
}
