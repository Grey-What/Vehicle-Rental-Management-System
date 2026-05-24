//Interface file of Car class
#ifndef CAR_H
#define CAR_H
#include "vehicle.h"
#include "main.h"

class Car : public Vehicle
{
private:
    int numberOfDoors;
    int numberOfSeats;

public:
    Car(QString id, QString brand, QString model, double pricePerDay,
        bool isRented, int numberOfDoors, int numberOfSeats);
    QString typeName() const override;
    void displayInfo() const override;
    void save(QTextStream& out) const override;

    void setNumberOfDoors(int numberOfDoors);
    int getNumberOfDoors();

    void setNumberOfSeats(int numberOfSeats);
    int getNumberOfSeats();
};

#endif
