// Vehicle manager implementation file
// Stores vehicles in vector and read and writes data to text file
#include "main.h"

void VehicleManager::addVehicle(Vehicle *vehicle)
{
    vehicles.push_back(vehicle);
}

void VehicleManager::displayAllVehicles() const
{
    for (Vehicle* vehicle : vehicles)
    {
        vehicle->displayInfo();
    }
}

VehicleManager::~VehicleManager()
{
    for(Vehicle* vehicle: vehicles)
    {
        delete vehicle;
    }
}
