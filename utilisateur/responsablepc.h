#ifndef RESPONSABLEPC_H
#define RESPONSABLEPC_H
//on a besoin de l'inclure pour utiliser les QString
#include <QString>
// on inclut la class utilisateur
#include "utilisateur/utilisateur.h"

namespace utilisateur {
    class responsablePC : public Utilisateur
    {
    public:
            /**
             * @brief Constructeur
             * @param email
             * @param motDePasse
             * @param nom
             * @param prenom
             */
          responsablePC(const QString &email, const QString &motDePasse, const QString &nom, const QString &prenom);
          //on ajoute une fonction qui permet de creer un point de collecte
          /**
           * @brief Creer un point de collecte dont il est le responsable.
           * @param Code postal du point de collecte.
           * @return Point de collecte cree.
           */
          //PointCollecte creerPC(const QString &nom);
          //ici on ajoute la fonction pour ajouter des producteurs sur le site
          /**
           * @brief Ajoute un producteur au point de collecte.
           * @param producteur
           * @param pc
           */
          //void ajouterProducteur(Producteur &producteur, const pc::PointCollecte &pc) const;
          //fonction d'affichage
          QString toString() const;
    };
}

#endif // RESPONSABLEPC_H
