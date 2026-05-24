// Utility function to ensure proper execution of program
#include "main.h"

// Checks validates user input for rent status
bool rentStatus()
{
    QTextStream out(stdout);
    QTextStream in(stdin);
    QString rentStatusString;

    while(1)
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
}
