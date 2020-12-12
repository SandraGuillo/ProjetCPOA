#include "daopointcollecte.h"

int dao::DAOPointCollecte::getClePrimaire(const PointDeCollecte &obj) const
{
    return obj.getCodePostal();
}

dao::DAOPointCollecte::DAOPointCollecte() : DAO() {}

dao::DAOPointCollecte *dao::DAOPointCollecte::getInstance() {
    if (instance==nullptr)
        instance=new dao::DAOPointCollecte();
    return instance;
}

dao::DAOPointCollecte *dao::DAOPointCollecte::instance=nullptr;
