#ifndef CATALOGUE_H
#define CATALOGUE_H

#include <QWidget>
namespace Ui {
    class Catalogue;

}
/**
 * @brief The Catalogue class page du catalogue de produits
 * @author Sandra GUILLO
 */
class Catalogue : public QWidget{

     Q_OBJECT
public:
    /**
     * @brief Catalogue Constructeur par default
     * @param parent widget parent
     */
    explicit Catalogue(QWidget *parent = nullptr);
    ~Catalogue();

public slots:
    /**
     * @brief retour fonction qui permet de retourner a la page precedente
     */
    void retour();
private:
    /**
      *@brief User interface faite avec QtDesigner puis generer par Qmake
      * */
    Ui:Catalogue *ui;
};

#endif // CATALOGUE_H
