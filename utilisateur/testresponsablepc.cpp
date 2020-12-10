#include "testresponsablepc.h"

//constructeur du test concernant le responsable d'un point de collecte
testResponsablePC::testResponsablePC()
{
    std::cout << "test responsable ok";
}
//fonction qui test tout ce dont on a besoin de verifier pour le responsable du point de collecte
void testResponsablePC::test(){
    //la definition du responsable d'un point de collecte
    const QString mail = "bob@free.fr";
    const QString mdp = "bobo54";
    const QString nom = "LEponge";
    const QString prenom = "Bob";
    utilisateur::responsablePC resp(mail, mdp, nom, prenom);
    std::cout<<"test"<< resp.toString().toStdString() <<std::endl;
}
