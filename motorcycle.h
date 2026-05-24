//Interface file of Motorcycle class
#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H
#include "vehicle.h"
#include "main.h"

class Motorcycle : public Vehicle
{
private:
    int engineCapacityCC;

public:
    Motorcycle(QString id, QString brand, QString model, double pricePerDay,
        bool isRented, int engineCapacityCC);
    QString typeName() const override;
    void displayInfo() const override;

    void setEngineCapacityCC(int engineCapacityCC);
    int getEngineCapacityCC();
};

#endif
