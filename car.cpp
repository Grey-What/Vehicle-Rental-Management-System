// Implementation of Vehicle derived class Car
#include "main.h"

QString Car::typeName() const
{
    return "Car";
}

void Car::displayInfo() const
{
    out << "Type: " << this->typeName() << Qt::endl;
    Vehicle::displayInfo();
    out << "Number of doors: " << numberOfDoors << endl;
    out << "Number of seats: " << numberOfSeats << endl;
}

Car::Car(QString id, QString brand, QString model, double pricePerDay,
         bool isRented, int numberOfDoors, int numberOfSeats)
    : Vehicle(id, brand, model, pricePerDay, isRented)
{
    this->numberOfDoors = numberOfDoors;
    this->numberOfSeats = numberOfSeats;
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
