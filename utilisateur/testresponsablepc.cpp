#include "testresponsablepc.h"

testResponsablePC::testResponsablePC()
{
    std::cout << "test responsable ok";
}
void testResponsablePC::test(){
    const QString mail = "bob@free.fr";
    const QString mdp = "bobo54";
    const QString nom = "LEponge";
    const QString prenom = "Bob";
    utilisateur::responsablePC resp(mail, mdp, nom, prenom);
    std::cout<<"test"<< resp.toString().toStdString() <<std::endl;
}
