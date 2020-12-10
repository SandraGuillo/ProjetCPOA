#ifndef ETATPOINTDECOLLECTE_H
#define ETATPOINTDECOLLECTE_H
#include <QString>
#include <QList>
/**
 * @brief The EtatPointDeCollecte class qui va permettre de regarder l'etat de la validation
 */
class EtatPointDeCollecte
{
private:
    /**
     * @brief pc la liste des point de collecte
     */
    QList<QString> pc ;
public:
    /**
     * @brief EtatPointDeCollecte le constructeur par default
     */
    EtatPointDeCollecte();
    /**
     * @brief toString la fonction qui va afficher si c'est valide ou en attente de validation
     * @return un string qui notifiera si c'est valide ou en attente
     */
    virtual QString toString() const = 0;
};

#endif // ETATPOINTDECOLLECTE_H
