#ifndef VALIDE_H
#define VALIDE_H
#include <QString>
#include "pc/etatpointdecollecte.h"

/**
 * @brief The Valide class classe qui permet de voir si l'etat du point de collecte est valide ou non
 * @author Sandra GUILLO
 */
class Valide : public EtatPointDeCollecte
{
public:
    /**
     * @brief Valide le constructeur par defaut
     */
    Valide();
    /**
     * @brief ouvrir la fonction qui va ouvrir un nouveau point de collecte
     */
    void ouvrir();
    /**
     * @brief toString la fonction qui permet d'afficher valide lorsque le point de collecte est valider
     * @return valide si l'etat est valide
     */
    QString toString() const ;
};

#endif // VALIDE_H
