#include "utilisateur/utilisateur.h"

testUtilisateur::testUtilisateur()
{
    utilisateur::utilisateur u("bob@free.fr", "bobo54", "LEponge", "Bob");
    assert((resp.toString()=="ResponsablePC:  bob@free.fr LEponge Bob"));
    std::cout << "test1 ok";
}
