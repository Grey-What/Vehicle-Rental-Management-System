// Abstract Base clss interface file

#ifndef VEHICLE_M
#define VEHICLE_M
#include <iostream>
#include <QString>
using namespace std;

class Vehicle {
private:
    Qstring id;
    Qstring brand;
    Qstring model;
    Qstring pricePerDay;
    bool isRented;

public:
    virtual QString typeName() const = 0;
    virtual QString displayInfo() const;


    void setId(Qstring id);
    Qstring getId();

    void setBrand(Qstring brand);
    Qstring getBrand();

    void setModel(Qstring model);
    Qstring getModel();

    void setPricePerDay(double pricePerDay);
    Qstring getPricePerDay();

    void setIsRented(bool isRented);
    bool getIsRented();
};

#endif