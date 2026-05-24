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

VehicleManager::~VehicleManager()
{
    for(Vehicle* vehicle: vehicles)
    {
        delete vehicle;
    }
}
