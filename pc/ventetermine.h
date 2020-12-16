#ifndef VENTETERMINE_H
#define VENTETERMINE_H
#include "pc/etatpointdecollecte.h"
#include <QString>

/**
 * @brief The VenteEnCours class la classe qui designe l'etat de la vente quand elle est en cours
 * @author Khaled SADEGH
 */
class VenteTermine : public EtatPointDeCollecte
{
public:
    /**
     * @brief Valide le constructeur par defaut
     */
    VenteTermine();
    /**
     * @brief ouvrir la fonction qui va ouvrir un nouveau point de collecte
     */
    void ouvrir();
    /**
     * @brief toString la fonction qui va afficher si c'est en attente de validation
     * @return un string qui notifiera si c'est en attente ou non
     */
    QString toString() const;
};
#endif // VENTETERMINE_H
