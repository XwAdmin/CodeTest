#include <QApplication>
#include "sqlhwd.h"

int main( int argc, char **argv)
{
    QApplication app( argc, argv );
    sqlHWD hwd;
    hwd.show();
    return app.exec();
}
