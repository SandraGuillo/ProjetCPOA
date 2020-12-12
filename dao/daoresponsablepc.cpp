#include "daoresponsablepc.h"

QString dao::DAOResponsablePC::getClePrimaire(const utilisateur::responsablePC &obj) const
{
    return obj.getEmail();
}

dao::DAOResponsablePC::DAOResponsablePC() : DAO() {}

dao::DAOResponsablePC *dao::DAOResponsablePC::getInstance() {
    if (instance==nullptr)
        instance=new dao::DAOResponsablePC();
    return instance;
}

dao::DAOResponsablePC *dao::DAOResponsablePC::instance=nullptr;
