#include "mainwindow.h"
#include <iostream>
#include <QApplication>


//using namespace std ;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    /* cette partie permet de tester la classe utilisateur a la seule condition de remttre en public le constructeur utilisateur en public
    * et d'inclure la class testutilisateur
    * testUtilisateur::TestUtilisateur t;
    t.test();*/

}
