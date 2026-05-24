#ifndef MAIN_H
#define MAIN_H
#include <QString>
#include <iostream>
#include <QTextStream>
#include <QFile>
#include <vector>
#include <QDebug>
#include <QFileInfo>
#include "vehicle.h"
#include "car.h"
#include "motorcycle.h"
#include "vehicleManager.h"
using namespace std;

inline const QString VEHICLE_FILENAME = "VehicleData.txt";

void displayMenu();
bool rentStatus();
QString validId(VehicleManager& manager);
double validPrice();
void addVehicle(VehicleManager& manager);

#endif
