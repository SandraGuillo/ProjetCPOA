#ifndef TESTUTILISATEUR_H
#define TESTUTILISATEUR_H
#include <cassert>
#include <iostream>
#include "daoproducteur.h"
#include <QString>



    /**
     * @brief Classe qui permet de tester la DAO Producteur, comme tout les DAO sont pareils, on ne test que celui ci.
     */
    class TestDAO
    {
        public:
             /**
             * @brief TestDAO constructeur du test
             */
            TestDAO();
            /**
             * @brief Fonction ou l'on effectue tous les test dont on a besoin
             */
            void test();
    };


#endif
