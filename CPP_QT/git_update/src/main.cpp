#include <QApplication>
#include "Update.h"

int main( int argc, char **argv )
{
    QApplication app( argc, argv );
    Update update;
    update.show();
    return app.exec();
}
