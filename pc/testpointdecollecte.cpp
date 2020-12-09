#include "pc/testpointdecollecte.h"

testPointDeCollecte::testPointDeCollecte()
{
    std::cout << "test pc ok" ;
}
void testPointDeCollecte::test(){
    const QString mail = "bob@free.fr";
    const QString mdp = "bobo54";
    const QString nom = "LEponge";
    const QString prenom = "Bob";
    utilisateur::responsablePC resp(mail, mdp, nom, prenom);

    const QString nompc = "friperie" ;
    const QString adresse = "rue du cookie" ;
    const int codePostal = 54500 ;
    QDateTime date = QDateTime();
    const int cycleEnJour = 3 ;
    PointDeCollecte pc(nompc,adresse,codePostal,date, cycleEnJour,resp);
    std::cout<<"test"<< pc.toString().toStdString() <<std::endl;
}
