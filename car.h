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
    QString typeName() const override;
    void displayInfo() const override;

    void setNumberOfDoors(int numberOfDoors);
    int getNumberOfDoors();

    void setNumberOfSeats(int numberOfSeats);
    int getNumberOfSeats();
};

#endif
