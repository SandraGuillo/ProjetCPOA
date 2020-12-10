#ifndef TESTUTILISATEUR_H
#define TESTUTILISATEUR_H
#include <cassert>
#include <iostream>
#include "utilisateur.h"
#include <QString>


namespace testUtilisateur {
    /**
     * @brief The TestUtilisateur class classe qui permet de tester l'utilisateur
     */
    class TestUtilisateur
    {
        public:
             /**
             * @brief TestUtilisateur constructeur du test
             */
            TestUtilisateur();
            /**
             * @brief test la fonction ou l'on effectue tous les test dont on a besoin
             */
            void test();
    };
}


#endif
