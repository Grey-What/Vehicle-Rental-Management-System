// Implimentation file for Base class
#include "vehicle.h"
#include <iostream>

QString Vehicle::displayInfo() const
{
    cout << "Vehicle Specifications:" << endl;
    cout << "ID: " << Vehicle::id << endl;
    cout << "Brand: " << Vehicle::brand << endl;
    cout << "Model: " << Vehicle::model<< endl;
    cout << "Price Per Day: " << Vehicle::pricePerDay << endl;
    cout << "Currently Rented: " << Vehicle::isRented << endl;
}

void Vehicle::setId(Qstring id)
{
    this->id = id;
}

Qstring Vehicle::getId()
{
    return id;
}

void Vehicle::setBrand(Qstring brand)
{
    this->brand = brand;
}

Qstring Vehicle::getBrand()
{
    return brand;
}

void Vehicle::setModel(Qstring model)
{
    this->model = model;
}

Qstring Vehicle::getModel()
{
    return model;
}

void Vehicle::setPricePerDay(double pricePerDay)
{
    this->pricePerDay = pricePerDay;
}

Qstring Vehicle::getPricePerDay()
{
    return pricePerDay;
}

void Vehicle::setIsRented(bool isRented)
{
    this->isRented = isRented;
}

bool Vehicle::getIsRented()
{
    return isRented;
}
