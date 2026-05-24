#include <QCoreApplication>
#include "main.h"
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTextStream out(stdout);
    QTextStream in(stdin);

    VehicleManager manager;

    QString optionString;
    int option;

    do {
        displayMenu();

        optionString = in.readLine();

        bool ok;
        option = optionString.toInt(&ok);

        if(!ok)
        {
            out << "Invalid number!" << Qt::endl;
        }

        switch (option)
        {
        case 1:
            addVehicle(manager);
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
            break;
        case 6:
            //returnVehicle();
            break;
        case 7:
            break;
        default:
            out << "Invalid Option" << Qt::endl;
        }
    } while (option != 7);

    return 0;
}

