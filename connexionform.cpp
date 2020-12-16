#include "connexionform.h"
#include "ui_connexionform.h"
#include "mainwindow.h"
#include "opener.h"
ConnexionForm::ConnexionForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ConnexionForm)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(retour()));
}

ConnexionForm::~ConnexionForm()
{
    delete ui;
}

void ConnexionForm::retour(){
    MainWindow *win=((MainWindow*)this->parentWidget());
    win->setCentralWidget(new Opener);
    delete this;
}
