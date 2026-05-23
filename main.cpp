#include <QCoreApplication>
#include "main.h"
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTextStream out(stdout);
    QTextStream in(stdin);

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
            addVehicle();
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
            out << "Invalid Option" << Qt::endl;
        }
    } while (option != 6);

    return 0;
}

