#include "opener.h"
#include "ui_opener.h"
#include "mainwindow.h"
#include "connexionform.h"
#include "inscription.h"

Opener::Opener(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Opener)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(afficherConnexion()));
    QObject::connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(afficherInscription()));
}

Opener::~Opener()
{
    delete ui;
}

void Opener::afficherConnexion() {
    MainWindow *win=(MainWindow*)parentWidget();
    win->setCentralWidget(new ConnexionForm);
    delete this;
}

void Opener::afficherInscription() {
    MainWindow *win=(MainWindow*)parentWidget();
    win->setCentralWidget(new Inscription);
    delete this;
}
