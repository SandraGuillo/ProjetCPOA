#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <QString>

/**
 * @namespace utilisateur
 * Contient toutes les classes utilisateurs.
 */
namespace utilisateur {
    /**
     * @brief Classe de base pour les utilisateurs.
     */
    class Utilisateur {
        //ici on déclare tous les champs dont on a besoin
        private:
          /**
           * @brief Adresse email. Doit etre unique.
           */
          QString email;
          /**
           * @brief Mot de passe du compte.
           */
          QString mot_de_passe;
          /**
           * @brief Nom de la personne.
           */
          QString nom;
          /**
           * @brief Prenom de la personne.
           */
          QString prenom;

          //on déclare le constructeur
        /*protected: a remettre pour la suite


           * @brief Constructeur
           * @param email
           * @param mot_de_passe
           * @param nom
           * @param prenom

          Utilisateur(const QString &email, const QString &mdp, const QString &nom, const QString &prenom);*/

        public:

          /**
           * @brief Constructeur
           * @param email
           * @param mot_de_passe
           * @param nom
           * @param prenom
           */
          Utilisateur(const QString &email, const QString &mdp, const QString &nom, const QString &prenom);
          /**
           * @brief toString
           * @return String representative.
           */
          QString toString() const;
          /**
           * @brief Getter email.
           * @return email
           */
          QString getEmail() const;
    };
}
#endif // UTILISATEUR_H
