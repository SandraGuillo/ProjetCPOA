#ifndef OPENER_H
#define OPENER_H

#include <QWidget>

namespace Ui {
class Opener;
}
/**
 * @author Nicolas QUEIGNEC
 * @brief Page de menu lors de l'ouverture du programme
 */
class Opener : public QWidget
{
    Q_OBJECT

public:
    /**
     * @brief Constructeur par défaut
     * @param parent Widget parent
     */
    explicit Opener(QWidget *parent = nullptr);
    ~Opener();

public slots:
    /**
     * @brief Affiche la page de connexion
     */
    void afficherConnexion();
    /**
     * @brief Affiche la page d'inscription
     */
    void afficherInscription();
private:
    /**
     * @brief User interface faite avec QtDesigner puis générée par Qmake
     */
    Ui::Opener *ui;
};

#endif // OPENER_H
