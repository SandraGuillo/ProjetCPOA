#ifndef ATTENTEVALIDATION_H
#define ATTENTEVALIDATION_H
#include <QString>
#include "pc/etatpointdecollecte.h"

/**
     * @brief The AttenteValidation class : permet de connaitre le statut de la validation
     */
    class AttenteValidation : public EtatPointDeCollecte
    {
    public:
        /**
         * @brief AttenteValidation le constructeur par default
         */
        AttenteValidation();
        /**
         * @brief ouvrir la fonction qui va ouvrir un nouveau point de collecte
         */
        void ouvrir();
        /**
         * @brief toString fonction qui va permet d'afficher l'etat de la validation
         * @return un string qui va afficher en attente de validation
         */
        QString toString() const ;
    };
#endif // ATTENTEVALIDATION_H
