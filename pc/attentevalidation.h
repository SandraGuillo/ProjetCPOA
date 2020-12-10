#ifndef ATTENTEVALIDATION_H
#define ATTENTEVALIDATION_H
#include <QString>
#include "pc/etatpointdecollecte.h"


    class AttenteValidation : public EtatPointDeCollecte
    {
    public:
        AttenteValidation();
        QString toString() const ;
    };
#endif // ATTENTEVALIDATION_H
