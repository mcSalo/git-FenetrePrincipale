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
    QMdiArea *zoneCentrale = new QMdiArea; //zone centrale




    //Ajout barre de menu/ssMenu
    QMenu *menuFichier= menuBar()->addMenu("&Fichier"); //menus
    QMenu *menuEdition= menuBar()->addMenu("&Edition");
    QMenu *menuAffichage= menuBar()->addMenu("&Affichage");
    QMenu *ssMenu=menuFichier->addMenu("Fichiers &récents");


    QTextEdit *text1 = new QTextEdit;
    text1->setContextMenuPolicy(Qt::NoContextMenu);
    QMdiSubWindow *ssFen1 = zoneCentrale->addSubWindow(text1);//fenetres

    QTextEdit *text2 = new QTextEdit;
    text2->setContextMenuPolicy(Qt::NoContextMenu);
    QMdiSubWindow *ssFen2 = zoneCentrale->addSubWindow(text2);

    setCentralWidget(zoneCentrale); //zone centrale

    QAction *actionToto= new QAction("T&oto");//Ajout des actions
    QAction *actionTata= new QAction("T&ata");
    QAction *actionTutu= new QAction("T&utu");
    ssMenu->addAction(actionToto);
    ssMenu->addAction(actionTata);
    ssMenu->addAction(actionTutu);

    QAction *actionQuitter= new QAction("&Quitter"); //creation action dans menu
    menuFichier->addAction(actionQuitter);

    connect(actionQuitter,SIGNAL(triggered()),this, SLOT(close()));


}
void FenPrincipale::contextMenuEvent(QContextMenuEvent *event)
{
    QMenu *menu = new QMenu();
    QAction *contextUndo = new QAction("Undo",this);
    QAction *contextRedo = new QAction("Redo",this);
    QAction *contextQuit = new QAction("Quit",this);

    connect(contextQuit,SIGNAL(triggered()),this,SLOT(close()));
    //connect(contextUndo,SIGNAL(triggered()),this,SLOT(()));
    //connect(contextRedo,SIGNAL(triggered()),this,SLOT(raise()));

    menu->addAction(contextUndo);
    menu->addAction(contextRedo);
    menu->addSeparator();
    menu->addAction(contextQuit);

    menu->exec(QCursor::pos());
}


FenPrincipale::~FenPrincipale()
{

}

