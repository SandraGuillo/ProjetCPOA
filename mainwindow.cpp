#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connexionform.h"
#include "opener.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(new Opener);
}

MainWindow::~MainWindow()
{
    delete ui;
}
