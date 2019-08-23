#include <QApplication>
#include "Form_tree.h"

int main( int argc, char **argv )
{
    QApplication app(argc, argv);
    Form_tree form_tree;
    form_tree.show();
    return app.exec();
}
