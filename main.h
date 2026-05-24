#ifndef MAIN_H
#define MAIN_H
#include <QString>
#include <iostream>
#include <QTextStream>
#include <QFile>
#include <vector>
#include "vehicle.h"
#include "car.h"
#include "motorcycle.h"
#include "vehicleManager.h"
using namespace std;

void displayMenu();
void addVehicle(VehicleManager& manager);

#endif
