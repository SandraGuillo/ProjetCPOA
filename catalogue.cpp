#include "catalogue.h"
#include "ui_catalogue.h"
#include "mainwindow.h"
#include "opener.h"

Catalogue::Catalogue(QWidget *parent):
    QWidget(parent),
    ui(new Ui::Catalogue)
{
    ui->setupUi(this);
    QObject::connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(retour()));
}
Catalogue::~Catalogue(){
    delete ui;
}
void Catalogue::retour(){
    MainWindow *win=((MainWindow*)this->parentWidget());
    win->setCentralWidget(new Opener);
    delete this;
}
