#include "mainwindow.h"
#include "utilisateur/testutilisateur.h"
#include <iostream>
#include <QApplication>


//using namespace std ;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    testUtilisateur::TestUtilisateur t;
    t.test();

}
