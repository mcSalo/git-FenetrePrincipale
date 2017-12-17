#ifndef FENPRINCIPALE_H
#define FENPRINCIPALE_H

#include <QWidget>
#include <QMainWindow>
#include <QLineEdit>
#include <QFormLayout>
#include <QMdiArea>
#include <QTextEdit>
#include <QMenuBar>


class FenPrincipale: public QMainWindow //On procede toujours par heritage
//2 types de QMainWindow: SDI>un doc a la fois, MDI>plusieurs doc a la fois
{
    public:
    FenPrincipale();
    ~FenPrincipale();

    private:

};
#endif
