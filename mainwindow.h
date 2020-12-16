#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}
/**
 * @author Nicolas QUEIGNEC
 * @brief Fenêtre principale
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief Constructeur par défaut
     * @param parent Widget parent
     */
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    /**
     * @brief User interface faite avec QtDesigner puis générée par Qmake
     */
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
