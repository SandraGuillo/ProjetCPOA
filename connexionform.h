#ifndef CONNEXIONFORM_H
#define CONNEXIONFORM_H

#include <QWidget>

namespace Ui {
class ConnexionForm;
}
/**
 * @author Nicolas QUEIGNEC
 * @brief Page de connexion
 */
class ConnexionForm : public QWidget
{
    Q_OBJECT

public:
    /**
     * @brief Constructeur par défaut
     * @param parent Widget parent
     */
    explicit ConnexionForm(QWidget *parent = nullptr);
    ~ConnexionForm();

public slots:
    /**
     * @brief Permet de retourner à la page précédente
     */
    void retour();
    /**
     * @brief seConnecter permet d'acceder au catalogue
     */
    void seConnecter();
private:
    /**
     * @brief User interface faite avec QtDesigner puis générée par Qmake
     */
    Ui::ConnexionForm *ui;
};

#endif // CONNEXIONFORM_H
