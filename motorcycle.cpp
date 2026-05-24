// Implementation of Vehicle derived class Motorcycle
#include "main.h"

QString Motorcycle::typeName() const
{
    return "Motorcycle";
}

void Motorcycle::displayInfo() const
{
    QTextStream out(stdout);
    QTextStream in(stdin);

    Vehicle::displayInfo();
    out << "Engine capacity CC: " << engineCapacityCC <<Qt::endl;

}

Motorcycle::Motorcycle(QString id, QString brand, QString model, double pricePerDay,
         bool isRented, int engineCapacityCC)
    : Vehicle(id, brand, model, pricePerDay, isRented)
{
    this->engineCapacityCC = engineCapacityCC;
}

void Motorcycle::setEngineCapacityCC(int engineCapacityCC)
{
    this->engineCapacityCC = engineCapacityCC;
}

int Motorcycle::getEngineCapacityCC()
{
    return engineCapacityCC;
}
