#ifndef ETATPOINTDECOLLECTE_H
#define ETATPOINTDECOLLECTE_H
#include <QString>
/**
 * @brief The EtatPointDeCollecte class
 */
class EtatPointDeCollecte
{
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
