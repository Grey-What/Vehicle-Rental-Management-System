//File contain main menu display function
#include "main.h"

using namespace std;


void displayMenu()
{
    QTextStream out(stdout);
    QTextStream in(stdin);

    out << "====== MENU ======" << Qt::endl;
    out << "1. Add Vehicle"<< Qt::endl;
    out << "2. Display all vehicles "<< Qt::endl;
    out << "3. Display available vehicles only"<< Qt::endl;
    out << "4. Rent vehicle"<< Qt::endl;
    out << "5. Return vehicle"<< Qt::endl;
    out << "6. Exit" << Qt::endl;
    out << "Enter option: "<< Qt::endl;
}
