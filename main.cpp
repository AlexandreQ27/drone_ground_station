#include "widget.h"

#include <QApplication>
#include<command.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    command c;
    c.show();
    return a.exec();
}
