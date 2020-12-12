#include "utilisateur/testutilisateur.h"

//cette classe permet de tester la création d'un utilisateur
TestUtilisateur::TestUtilisateur()
{
    std::cout << "test utilisateur ok";

}

//cette fonction permet de tester tout ce qui concerne l'utilisateur en general
//pour effectuer ce test il faut modifier le constructeur d'utilisateur en le mettant en public a la place de protected
void TestUtilisateur::test(){
    //test du constructeur
    const QString mail = "bob@free.fr";
    const QString mdp = "bobo54";
    const QString nom = "LEponge";
    const QString prenom = "Bob";
    utilisateur::Utilisateur resp(mail, mdp, nom, prenom);
    std::cout<<"test"<< resp.toString().toStdString() <<std::endl;
}
