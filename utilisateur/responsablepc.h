#ifndef RESPONSABLEPC_H
#define RESPONSABLEPC_H
//on a besoin de l'inclure pour utiliser les QString
#include <QString>
// on inclut la class utilisateur
#include "utilisateur/utilisateur.h"


#include <QList>

namespace utilisateur {
    /**
     * @brief The responsablePC class la class qui permet de gerer ce qui concerne le responsable du point de collecte
     */
    class responsablePC : public Utilisateur
    {
    private:
        /**
         * @brief pc la liste des points de collecte associes au responsable
         */
        //QList<PointDeCollecte> pc ;
    public:
        /**
         * @brief Constructeur par default
         */
        responsablePC();
            /**
             * @brief Constructeur
             * @param email du responsable
             * @param motDePasse du responsable
             * @param nom le nom du responsable
             * @param prenom du responsable
             */
          responsablePC(const QString &email, const QString &motDePasse, const QString &nom, const QString &prenom);
          //on ajoute une fonction qui permet de creer un point de collecte
          /**
           * @brief Creer un point de collecte dont il est le responsable.
           * @param Code postal du point de collecte.
           * @return Point de collecte cree.
           */
          //PointDeCollecte creerPC(const QString &nom);

          //fonction d'affichage
          /**
           * @brief toString la fonction qui permet d'afficher les informations du responsable du point de collecte
           * @return les informations du responsable
           */
          QString toString() const;
    };
}

#endif // RESPONSABLEPC_H
