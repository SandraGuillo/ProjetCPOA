#ifndef ETATPOINTDECOLLECTE_H
#define ETATPOINTDECOLLECTE_H
#include <QString>
#include <QList>

/**
 * @brief The EtatPointDeCollecte class qui va permettre de regarder l'etat de la validation
 * @author Sandra GUILLO, Khaled SADEGH
 */
class EtatPointDeCollecte
{
public:
    /**
     * @brief EtatPointDeCollecte le constructeur par default
     */
    EtatPointDeCollecte();
    /**
     * @brief ouvrir la fonction qui va ouvrir un nouveau point de collecte
     */
    virtual void ouvrir() = 0;
    /**
     * @brief toString la fonction qui va afficher si c'est valide ou en attente de validation
     * @return un string qui notifiera si c'est valide ou en attente
     */
    virtual QString toString() const = 0;
};

#endif // ETATPOINTDECOLLECTE_H
