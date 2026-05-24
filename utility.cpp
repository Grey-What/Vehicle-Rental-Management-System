// Utility function to ensure proper execution of program
#include "main.h"

// Checks validates user input for rent status
bool rentStatus()
{
    QTextStream out(stdout);
    QTextStream in(stdin);

    while(true)
    {
        out << "1. Yes" << Qt::endl;
        out << "2. No" << Qt::endl;

        out << "Enter option: " << Qt::endl;

        QString rentStatusString = in.readLine();

        bool ok;

        int rentStatus = rentStatusString.toInt(&ok);

        if(ok && rentStatus == 1)
        {
            return true;
        }

        else if(ok && rentStatus == 2)
        {
            return false;
        }
        else
        {
            out << "Invalid input." << Qt::endl;
            out << "Try again" << Qt::endl;
        }
    }
    return false;
}

QString validId(VehicleManager& manager)
{
    QTextStream out(stdout);
    QTextStream in(stdin);
    QString id;

    while (true)
    {
        out << "Enter id: " << Qt::endl;
        id = in.readLine();

        if (manager.idExist(id))
        {
            out << "ID already exists." << Qt::endl;
            out << "Create a different ID" << Qt::endl;
        } else if (id.trimmed().isEmpty())
        {
            out << "ID cannot be empty." << Qt::endl;
            out << "Try again." << Qt::end;
        }
        else
        {
            return id;
        }
    }
}
