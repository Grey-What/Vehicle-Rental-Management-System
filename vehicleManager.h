//File contains the veicle manager interface file
// Stores and reads vehicle data
#ifndef VEHICLEMANAGER_H
#define VEHICLEMANAGER_H
#include "main.h"

using namespace std;

class VehicleManager
{
private:
    vector<Vehicle*> vehicles;

public:
    void addVehicle(Vehicle* vehicle);

    void searchVehicleID();

    void displayAllVehicles() const;

    void displayAvailableVehicles();

    ~VehicleManager();
};

#endif
