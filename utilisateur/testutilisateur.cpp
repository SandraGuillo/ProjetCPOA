#include "utilisateur/testutilisateur.h"

//cette classe permet de tester la création d'un utilisateur
testUtilisateur::TestUtilisateur::TestUtilisateur()
{

    std::cout << "test utilisateur ok";

}

//pour effectuer ce test il faut modifier le constructeur d'utilisateur en le mettant en public a la place de protected
void testUtilisateur::TestUtilisateur::test(){
    const QString mail = "bob@free.fr";
    const QString mdp = "bobo54";
    const QString nom = "LEponge";
    const QString prenom = "Bob";
    utilisateur::Utilisateur resp(mail, mdp, nom, prenom);
    std::cout<<"test"<< resp.toString().toStdString() <<std::endl;
}
