#ifndef DAORESPONSABLEPC_H
#define DAORESPONSABLEPC_H

#include "dao.h"
#include "utilisateur/responsablepc.h"

namespace dao {
    /**
     * @author Nicolas QUEIGNEC
     * @brief Classe DAO Singleton pour les PointCollecte. Clé primaire : codePostal.
     */
    class DAOResponsablePC : public DAO<QString, utilisateur::responsablePC>
    {
        private:
            QString getClePrimaire(const utilisateur::responsablePC &obj) const override;
            /**
             * @brief Instance unique du DAOResponsablePC.
             */
            static DAOResponsablePC *instance;
            /**
             * @brief Constructeur par défaut.
             */
            DAOResponsablePC();
        public:
            /**
             * @brief Retourne le pointeur vers l'instance utilisée.
             * @return Pointeur vers instance.
             */
            static DAOResponsablePC *getInstance();
    };
}


#endif // DAOPRODUCTEUR_H
