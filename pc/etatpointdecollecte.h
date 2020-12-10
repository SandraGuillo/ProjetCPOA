#ifndef ETATPOINTDECOLLECTE_H
#define ETATPOINTDECOLLECTE_H
#include <QString>
#include <QList>
/**
 * @brief The EtatPointDeCollecte class
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
     * @brief EtatPointDeCollecte
     */
    EtatPointDeCollecte();
    /**
     * @brief toString
     * @return
     */
    virtual QString toString() const = 0;
};

#endif // ETATPOINTDECOLLECTE_H
