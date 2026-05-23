// Implementation of Vehicle derived class Car
#include <iostream>
#include <QString>
#include "car.h"
#include "main.h"

QString Car::typeName() const
{
    return "Car";
}

void Car::displayInfo() const
{
    Vehicle::displayInfo();
    cout << "Number of doors: " << numberOfDoors << endl;
    cout << "Number of seats: " << numberOfSeats << endl;

}

void Car::setNumberOfDoors(int numberOfDoors)
{
    this->numberOfDoors = numberOfDoors;
}

int Car::getNumberOfDoors()
{
    return numberOfDoors;
}

void Car::setNumberOfSeats(int numberOfSeats)
{
    this->numberOfSeats = numberOfSeats;
}

int Car::getNumberOfSeats()
{
    return numberOfSeats;
}
