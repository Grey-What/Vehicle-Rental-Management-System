// Implimentation file for Base class
#include "vehicle.h"
#include <iostream>

void Vehicle::displayInfo() const
{
    cout << "Vehicle Specifications:" << endl;
    cout << "ID: " << id.toStdString() << endl;
    cout << "Brand: " << brand.toStdString() << endl;
    cout << "Model: " << model.toStdString() << endl;
    cout << "Price Per Day: " << pricePerDay << endl;
    cout << "Currently Rented: " << isRented << endl;
}

void Vehicle::setId(QString id)
{
    this->id = id;
}

QString Vehicle::getId() const
{
    return id;
}

void Vehicle::setBrand(QString brand)
{
    this->brand = brand;
}

QString Vehicle::getBrand() const
{
    return brand;
}

void Vehicle::setModel(QString model)
{
    this->model = model;
}

QString Vehicle::getModel() const
{
    return model;
}

void Vehicle::setPricePerDay(double pricePerDay)
{
    this->pricePerDay = pricePerDay;
}

double Vehicle::getPricePerDay() const
{
    return pricePerDay;
}

void Vehicle::setIsRented(bool isRented)
{
    this->isRented = isRented;
}

bool Vehicle::getIsRented() const
{
    return isRented;
}

Vehicle::~Vehicle(){}
