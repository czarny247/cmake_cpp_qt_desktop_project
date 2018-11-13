//#include <iostream>
//#include <iomanip>

//#include "projectLib/ProjectExample.h"

#include "gui/mainwindow/mainwindow.h"

#include <QApplication>

int main(int argc, char **argv) 
{
    //projectLib::ProjectExample p;
    //std::cout << std::boolalpha << p.f() << std::endl;
    //return 0;

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
