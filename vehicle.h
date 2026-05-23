// Abstract Base clss interface file

#ifndef VEHICLE_M
#define VEHICLE_M
#include <QString>
using namespace std;

class Vehicle {
private:
    QString id;
    QString brand;
    QString model;
    double pricePerDay;
    bool isRented;

public:
    virtual QString typeName() const = 0;
    virtual void displayInfo() const;

    Vehicle(QString id,
            QString brand,
            QString model,
            double pricePerDay,
            bool isRented);


    void setId(QString id);
    QString getId() const;

    void setBrand(QString brand);
    QString getBrand() const;

    void setModel(QString model);
    QString getModel() const;

    void setPricePerDay(double pricePerDay);
    double getPricePerDay() const;

    void setIsRented(bool isRented);
    bool getIsRented() const;

    virtual ~Vehicle();
};

#endif