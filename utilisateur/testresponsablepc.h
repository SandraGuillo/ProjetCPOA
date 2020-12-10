#ifndef TESTRESPONSABLEPC_H
#define TESTRESPONSABLEPC_H
#include "responsablepc.h"
#include <cassert>
#include <iostream>
#include "utilisateur.h"
#include <QString>


/**
 * @brief The testResponsablePC class classe qui permet de tester tout ce dont on a besoin sur le responsable d'un point de collecte
 */
class testResponsablePC
{
public:
    /**
     * @brief testResponsablePC le constructeur du test
     */
    testResponsablePC();
    /**
     * @brief test la fonction qui effectue tous les test
     */
    void test();
};

#endif // TESTRESPONSABLEPC_H
