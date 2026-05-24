// Vehicle manager implementation file
// Stores vehicles in vector and read and writes data to text file
#include "main.h"

void VehicleManager::addVehicle(Vehicle *vehicle)
{
    vehicles.push_back(vehicle);
}

void VehicleManager::searchVehicleID()
{
    QTextStream out(stdout);
    QTextStream in(stdin);
    QString ID;

    out << "Enter ID: " << Qt::endl;
    ID = in.readLine();

    for (Vehicle* vehicle: vehicles)
    {
        if (ID == vehicle->getId())
        {
            vehicle->displayInfo();
        }
    }
}

void VehicleManager::displayAllVehicles() const
{
    for (Vehicle* vehicle : vehicles)
    {
        vehicle->displayInfo();
    }
}

void VehicleManager::displayAvailableVehicles()
{
    for (Vehicle* vehicle: vehicles)
    {
        if (!vehicle->getIsRented())
        {
            vehicle->displayInfo();
        }
    }
}

void VehicleManager::rentVehicle()
{
    QTextStream out(stdout);
    QTextStream in(stdin);
    QString ID;

    while (true)
    {
        out << "Enter ID of vehicle to rent: " << Qt::endl;
        ID = in.readLine();

        for (Vehicle* vehicle: vehicles)
        {
            if (ID == vehicle->getId() && !vehicle->getIsRented())
            {
                vehicle->displayInfo();
                vehicle->setIsRented(true);
                out << "Success" << Qt::endl;
                out << "Enjoy the ride!" << Qt::endl;
                return;
            }
        }
        out << "unfortunately this vehicle is unavailable." << Qt::endl;
        out << "select another option." << Qt::endl;
    }
}

void VehicleManager::returnVehicle()
{
    QTextStream out(stdout);
    QTextStream in(stdin);
    QString ID;

    while (true)
    {
        out << "Enter ID of vehicle to return: " << Qt::endl;
        ID = in.readLine();

        for (Vehicle* vehicle: vehicles)
        {
            if (ID == vehicle->getId() && vehicle->getIsRented())
            {
                vehicle->displayInfo();
                vehicle->setIsRented(false);
                out << "Success!" << Qt::endl;
                out << "Thank you for your support" << Qt::endl;
                return;
            }
        }
        out << "Unsuccesful. Try again" << Qt::endl;
    }
}

void VehicleManager::saveToFile() const
{
    QFile file(VEHICLE_FILENAME);
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        return;
    }

    QTextStream out(&file);

    for(Vehicle* vehicle : vehicles)
    {
        vehicle->save(out);
    }

    file.close();
}

void VehicleManager::loadFromFile()
{
    QFile file(VEHICLE_FILENAME);

    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream out(stdout);
        out << "Failed to open file. Restart program" << Qt::endl;
        return;
    }

    QTextStream in(&file);

    while(!in.atEnd())
    {
        QString line = in.readLine();

        QStringList parts = line.split("|");

        if (parts.size() < 7)
        {
            continue;
        }

        QString type = parts[0].toLower();

        if(type == "car")
        {
            vehicles.push_back(
                new Car(
                    parts[1],
                    parts[2],
                    parts[3],
                    parts[4].toDouble(),
                    parts[5].toInt(),
                    parts[6].toInt(),
                    parts[7].toInt()
                    )
                );
        }

        else if(type == "motorcycle")
        {
            vehicles.push_back(
                new Motorcycle(
                    parts[1],
                    parts[2],
                    parts[3],
                    parts[4].toDouble(),
                    parts[5].toInt(),
                    parts[6].toInt()
                    )
                );
        }
    }
    file.close();
}

VehicleManager::~VehicleManager()
{
    for(Vehicle* vehicle: vehicles)
    {
        delete vehicle;
    }
}

