// Implementation of Vehicle derived class Car
#include <iostream>
#include <QString>
#include "car.h"
#include "main.h"

Qstring Car::typeName()
{
    return "Car";
}

void Car::displayInfo()
{
    cout << "Vehicle Specifications:" << endl;
    cout << "ID: " << Car::id << endl;
    cout << "Brand: " << Car::brand << endl;
    cout << "Model: " << Car::model << endl;
    cout << "Number of doors: " << Car::numberOfDoors << endl;
    cout << "Number of seats: " << Car::numberOfSeats << endl;
    cout << "Price Per Day: " << Car::pricePerDay << endl;
    cout << "Currently Rented: " << Car::isRented << endl;
}

void Car::setNumberOfDoors(int numberOfDoors);
int Car::getNumberOfDoors();

void Car::setNumberofSeats(int numberofSeats);
int Car::getNumberofSeats();
