#ifndef DAO_H
#define DAO_H

#include <QMap>
/**
 * @namespace dao
 * @author Nicolas QUEIGNEC
 * Contient toutes les classes pour la DAO permettant de sauvagarder les objets dans des Map.
 */
namespace dao {
    /**
     * @brief Classe de base du patron DAO.
     * @param PK Type de la clé primaire de l'objet de type T.
     * @param T Type dont on veut sauvegarder les instances.
     * @author Nicolas QUEIGNEC
     */
    template<typename PK, typename T>
    class DAO {
        private:
            /**
             * @brief Liste de tout les objets de type T sauvegardés.
             */
            QMap<PK, T> liste;
            /**
             * @brief Retourne la valeur de la clé primaire de obj.
             * @param obj Objet dont on veut la valeur de sa clé primaire.
             * @return Valeur de la clé primaire.
             */
            virtual PK getClePrimaire(const T &obj) const = 0;
        protected:
            /**
             * @brief Constructeur par défaut. Initialise la liste pour la sauvegarde.
             */
            DAO() {};
        public:
            /**
             * @brief Retourne l'objet sauvegardé ayant pour clé primaire, celle passée en paramètre.
             * @param Valeur de la clé primaire.
             * @return Objet avec la bonne clé primaire.
             */
            T getParClePrimaire(const PK &cle) {
                return liste[cle];
            };
            /**
             * @brief Retourne toutes les instances de type T sauvegardées.
             * @return Liste des objets.
             */
            QList<T> getAll() const {
                return liste.values();
            };
            /**
             * @brief Sauvegarde l'objet.
             * @param Objet à sauvegardé.
             */
            void create(const T &obj) {
                PK cle=getClePrimaire(obj);
                if (!liste.contains(cle))
                    liste.insert(cle, obj);
            };
    };
}
#endif // DAO_H
