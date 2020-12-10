#ifndef VALIDE_H
#define VALIDE_H
#include <QString>
#include "pc/etatpointdecollecte.h"

class Valide : public EtatPointDeCollecte
{
public:
    Valide();
    QString toString() const ;
};

#endif // VALIDE_H
