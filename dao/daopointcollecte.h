#ifndef DAOPRODUCTEUR_H
#define DAOPRODUCTEUR_H

#include "dao.h"
#include "pc/pointdecollecte.h"

namespace dao {
    /**
     * @author Nicolas QUEIGNEC
     * @brief Classe DAO Singleton pour les PointCollecte. Clé primaire : codePostal.
     */
    class DAOPointCollecte : public DAO<int, PointDeCollecte>
    {
        private:
            int getClePrimaire(const PointDeCollecte &obj) const override;
            /**
             * @brief Instance unique du DAOPointCollecte.
             */
            static DAOPointCollecte *instance;
            /**
             * @brief Constructeur par défaut.
             */
            DAOPointCollecte();
        public:
            /**
             * @brief Retourne le pointeur vers l'instance utilisée.
             * @return Pointeur vers instance.
             */
            static DAOPointCollecte *getInstance();
    };
}


#endif // DAOPRODUCTEUR_H
