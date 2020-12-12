#include "testdao.h"

TestDAO::TestDAO() {}

void TestDAO::test() {
    // initialisation données
    const QString mail = "bob@free.fr";
    const QString mdp = "bobo54";
    const QString nom = "LEponge";
    const QString prenom = "Bob";
    Producteur prod1(mail, mdp, nom, prenom);
    const QString mail2 = "ouioui@orange.fr";
    const QString mdp2 = "danssonbeautaxi";
    const QString nom2 = "Oui";
    const QString prenom2 = "Oui";
    Producteur prod2(mail2, mdp2, nom2, prenom2);
    // test du pattern singleton
    dao::DAOProducteur *daoPtr=dao::DAOProducteur::getInstance();
    dao::DAOProducteur *dao2Ptr=dao::DAOProducteur::getInstance();
    dao::DAOProducteur dao=*daoPtr;
    std::cout << "test singleton : ";
    if (daoPtr==dao2Ptr)
        std::cout << "ok";
    else
        std::cout << "erreur";
    std::cout << std::endl;
    // test de la methode create
    dao.create(prod1);
    dao.create(prod2);
    std::cout << "test create : ";
    if (dao.getAll().size()==2)
        std::cout << "ok";
    else
        std::cout << "erreur";
    std::cout << std::endl;
    // test de la methode getParClePrimaire
    const QString mailBob = "bob@free.fr";
    Producteur bob=dao.getParClePrimaire(mailBob);
    std::cout << "test get : ";;
    if (bob.toString().toStdString()=="Producteur :  bob@free.fr LEponge Bob")
        std::cout << "ok";
    else
        std::cout << "erreur";
    std::cout << std::endl;
}
