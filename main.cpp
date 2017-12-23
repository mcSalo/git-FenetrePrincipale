#include <QApplication>

#include "FenPrincipale.h"

int main(int arc, char *argv[])
{
    QApplication app(arc,argv);

	FenPrincipale fenPrincipale;
	fenPrincipale.show();

    return app.exec();
}
