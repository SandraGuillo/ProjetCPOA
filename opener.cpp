#include "opener.h"
#include "ui_opener.h"
#include "mainwindow.h"
#include "connexionform.h"
#include "inscription.h"
/**
 * @brief Opener::Opener
 * @param parent
 */
Opener::Opener(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Opener)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(afficherConnexion()));
    QObject::connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(afficherInscription()));
}

/**
 * @brief Opener::~Opener
 */
Opener::~Opener()
{
    delete ui;
}

/**
 * @brief Opener::afficherConnexion
 */
void Opener::afficherConnexion() {
    MainWindow *win=(MainWindow*)parentWidget();
    win->setCentralWidget(new ConnexionForm);
    delete this;
}

/**
 * @brief Opener::afficherInscription
 */
void Opener::afficherInscription() {
    MainWindow *win=(MainWindow*)parentWidget();
    win->setCentralWidget(new Inscription);
    delete this;
}

