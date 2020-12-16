#ifndef INSCRIPTION_H
#define INSCRIPTION_H

#include <QWidget>

namespace Ui {
class Inscription;
}
/**
 * @author Nicolas QUEIGNEC
 * @brief Page d'inscription
 */
class Inscription : public QWidget
{
    Q_OBJECT

public:
    /**
     * @brief Constructeur par défaut
     * @param parent Widget parent
     */
    explicit Inscription(QWidget *parent = nullptr);
    ~Inscription();

public slots:
    /**
     * @brief Permet de retourner à la page précédente
     */
    void retour();

private:
    /**
     * @brief User interface faite avec QtDesigner puis générée par Qmake
     */
    Ui::Inscription *ui;
};

#endif // INSCRIPTION_H
