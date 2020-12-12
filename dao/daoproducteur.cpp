#include "daoproducteur.h"

QString dao::DAOProducteur::getClePrimaire(const Producteur &obj) const
{
    return obj.getEmail();
}

dao::DAOProducteur::DAOProducteur() : DAO() {}

dao::DAOProducteur *dao::DAOProducteur::getInstance() {
    if (instance==nullptr)
        instance=new dao::DAOProducteur();
    return instance;
}

dao::DAOProducteur *dao::DAOProducteur::instance=nullptr;
