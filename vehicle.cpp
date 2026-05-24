// Implimentation file for Base class
#include "main.h"

void Vehicle::displayInfo() const
{
    QTextStream out(stdout);
    QTextStream in(stdin);

    out << "\nVehicle Specifications:" << Qt::endl;
    out << "Type: " << this->typeName() << Qt::endl;
    out << "ID: " << id << Qt::endl;
    out << "Brand: " << brand << Qt::endl;
    out << "Model: " << model << Qt::endl;
    out << "Price Per Day: " << pricePerDay << Qt::endl;
    out << "Currently Rented: " << isRented << Qt::endl;
}

Vehicle::Vehicle(QString id,
                 QString brand,
                 QString model,
                 double pricePerDay,
                 bool isRented)
{
    this->id = id;
    this->brand = brand;
    this->model = model;
    this->pricePerDay = pricePerDay;
    this->isRented = isRented;
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

void Vehicle::save(QTextStream &out) const
{
    out << this->id << "|"
        << this->brand << "|"
        << this->model << "|"
        << this->pricePerDay << "|"
        << this->isRented;
}

Vehicle::~Vehicle(){}
