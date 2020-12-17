#ifndef VENTEENCOURS_H
#define VENTEENCOURS_H

#include "pc/etatpointdecollecte.h"
#include <QString>

/**
 * @brief The VenteEnCours class la classe qui designe l'etat de la vente quand elle est en cours
 * @author Khaled SADEGH
 */
class VenteEnCours : public EtatPointDeCollecte
{
public:
    /**
     * @brief Valide le constructeur par defaut
     */
    VenteEnCours();
    /**
     * @brief ouvrir la fonction qui va ouvrir un nouveau point de collecte
     */
    void ouvrir();
    /**
     * @brief toString la fonction qui va afficher si c'est valide ou en attente de validation
     * @return un string qui notifiera si c'est valide ou en attente
     */
    QString toString() const;
};
#endif // VENTEENCOURS_H
