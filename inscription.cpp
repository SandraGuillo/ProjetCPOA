#include "inscription.h"
#include "ui_inscription.h"
#include "mainwindow.h"
#include "opener.h"

Inscription::Inscription(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Inscription)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(retour()));
}

Inscription::~Inscription()
{
    delete ui;
}

void Inscription::retour(){
    MainWindow *win=((MainWindow*)this->parentWidget());
    win->setCentralWidget(new Opener);
    delete this;
}
