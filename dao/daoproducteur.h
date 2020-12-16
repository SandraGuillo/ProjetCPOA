#ifndef DAOPRODUCTEUR_H
#define DAOPRODUCTEUR_H

#include "dao.h"
#include "utilisateur/producteur.h"

namespace dao {
    /**
     * @author Nicolas QUEIGNEC
     * @brief Classe DAO Singleton pour les Producteur. Clé primaire : codePostal.
     */
    class DAOProducteur : public DAO<QString, Producteur>
    {
        private:
            QString getClePrimaire(const Producteur &obj) const override;
            /**
             * @brief Instance unique du DAOProducteur.
             */
            static DAOProducteur *instance;
            /**
             * @brief Constructeur par défaut.
             */
            DAOProducteur();
        public:
            /**
             * @brief Retourne le pointeur vers l'instance utilisée.
             * @return Pointeur vers instance.
             */
            static DAOProducteur *getInstance();
    };
}

#endif // DAOPRODUCTEUR_H
