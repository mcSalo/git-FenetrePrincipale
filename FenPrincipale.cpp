#include "FenPrincipale.h"

FenPrincipale::FenPrincipale()
{
    //Utilisation SDI
    /*
    QWidget *zoneCentrale = new QWidget; //<---

    QLineEdit *nom =new QLineEdit;
    QLineEdit *prenom =new QLineEdit;
    QLineEdit *age =new QLineEdit;

    QFormLayout *layout1= new QFormLayout;
    layout1->addWidget(nom);
    layout1->addWidget(prenom);
    layout1->addWidget(age);
    zoneCentrale->setLayout(layout1);

    setCentralWidget(zoneCentrale); //<---
    */

    //Utilisation MDI
    QMdiArea *zoneCentrale = new QMdiArea; //<---

    //Ajout barre de menu/ssMenu
    QMenu *menuFichier= menuBar()->addMenu("&Fichier"); //<---
    QMenu *menuEdition= menuBar()->addMenu("&Edition");
    QMenu *menuAffichage= menuBar()->addMenu("&Affichage");
    QMenu *ssMenu=menuFichier->addMenu("Fichiers &récents");

    QTextEdit *text1 = new QTextEdit;
    QTextEdit *text2 = new QTextEdit;

    QMdiSubWindow *ssFen1 = zoneCentrale->addSubWindow(text1); //<---
    QMdiSubWindow *ssFen2 = zoneCentrale->addSubWindow(text2);

    setCentralWidget(zoneCentrale); //<---

    //Ajout des actions
    QAction *actionToto= new QAction("T&oto");
    QAction *actionTata= new QAction("T&ata");
    QAction *actionTutu= new QAction("T&utu");
    ssMenu->addAction(actionToto);
    ssMenu->addAction(actionTata);
    ssMenu->addAction(actionTutu);

    QAction *actionQuitter= new QAction("&Quitter"); //creation action dans menu
    menuFichier->addAction(actionQuitter);

    connect(actionQuitter,SIGNAL(triggered()), app, SLOT(quit()));

}



FenPrincipale::~FenPrincipale()
{

}

