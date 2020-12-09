#include "mainwindow.h"
#include <iostream>
#include <QApplication>
#include "pc/testpointdecollecte.h"


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

    /*ici nous allons tester la classe responsable du point de collecte . penser a include la classe testResponsablePC
    testResponsablePC res;
    res.test();*/

    /*ici on test le point de collecte*/
    testPointDeCollecte pc;
    pc.test();

}
