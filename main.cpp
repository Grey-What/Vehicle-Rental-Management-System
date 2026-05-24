#include <QCoreApplication>
#include "main.h"
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTextStream out(stdout);
    QTextStream in(stdin);

    VehicleManager manager;
    manager.loadFromFile();

    int option;

    do {
        displayMenu();

        option = validNumber();

        switch (option)
        {
        case 1:
            addVehicle(manager);
            manager.saveToFile();
            break;
        case 2:
            manager.searchVehicleID();
            break;
        case 3:
            manager.displayAllVehicles();
            break;
        case 4:
            manager.displayAvailableVehicles();
            break;
        case 5:
            manager.rentVehicle();
            manager.saveToFile();
            break;
        case 6:
            manager.returnVehicle();
            manager.saveToFile();
            break;
        case 7:
            break;
        default:
            out << "Invalid Option" << Qt::endl;
        }
    } while (option != 7);

    return 0;
}

