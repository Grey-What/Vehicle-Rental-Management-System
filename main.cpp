#include <QCoreApplication>
#include <iostream>
#include "main.h"
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);  

    int option = 0;

    do {
        displayMenu();

        cin >> option;
        if(!(cin >> option))
        {
            cin.clear();
            cin.ignore(1000, '\n');

            cout << "Invalid input. Enter a number." << endl;

            option = 0;
        }


        switch (option)
        {
        case 1:
            //addVehicle();
            break;
        case 2:
            //SearchVehicleID();
            break;
        case 3:
            //displayAvailableVehicle();
            break;
        case 4:
            //displayAllVehicle();
            break;
        case 5:
            //rentVehicle();
            break;
        case 6:
            break;
        default:
            cout << "Invalid Option" << endl;
        }
    } while (option != 6);

    return 0;
}

