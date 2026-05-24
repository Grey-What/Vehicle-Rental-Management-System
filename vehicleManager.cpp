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
                cout << "Success" << Qt::endl;
                cout << "Enjoy the ride!" << Qt::endl;
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
                cout << "Success" << Qt::endl;
                cout << "Thank you for your support" << Qt::endl;
                return;
            }
        }
        out << "Unsuccesful. Try again" << Qt::endl;
    }
}

VehicleManager::~VehicleManager()
{
    for(Vehicle* vehicle: vehicles)
    {
        delete vehicle;
    }
}
