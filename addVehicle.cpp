//Function to collect input from user to instantiate Vehicle object
#include "main.h"
QString addMotorcycle(VehicleManager& manager,
                      QString id,
                      QString brand,
                      QString model,
                      double pricePerDay,
                      bool isRented)
{
    QTextStream out(stdout);
    QTextStream in(stdin);

    int engineCapacityCC;

    out << "Enter Engine Capacity CC: " << Qt::endl;
    engineCapacityCC = validNumber();

    manager.addVehicle(
        new Motorcycle(
            id,
            brand,
            model,
            pricePerDay,
            isRented,
            engineCapacityCC)
        );

    return "Success\n";
}

QString addCar(VehicleManager& manager,
               QString id,
               QString brand,
               QString model,
               double pricePerDay,
               bool isRented)
{
    QTextStream out(stdout);
    QTextStream in(stdin);

    int numberOfDoors;
    int numberOfSeats;

    out << "Enter numberOfDoors: " << Qt::endl;
    numberOfDoors = validNumber();

    out << "Enter numberOfSeats: " << Qt::endl;
    numberOfSeats = validNumber();

    manager.addVehicle(
        new Car(
            id,
            brand,
            model,
            pricePerDay,
            isRented,
            numberOfDoors,
            numberOfSeats
            )
        );

    out << "Object created" << Qt::endl;
    return "Success\n";
}

void addVehicle(VehicleManager& manager)
{
    QTextStream out(stdout);
    QTextStream in(stdin);

    int option;

    QString id;
    QString brand;
    QString model;
    double pricePerDay;
    bool isRented = false;

    do {
        out << "Type of Vehicle to add:" << Qt::endl;
        out << "1. Car" << Qt::endl;
        out << "2. MotorCycle" << Qt::endl;

        out << "Enter option: " << Qt::endl;
        option = validNumber();

        if(option != 1 && option != 2)
        {
            out << "Invalid number!" << Qt::endl;
        }
    } while (option != 1 && option != 2);

    id = validId(manager);

    out << "Enter brand: " << Qt::endl;
    brand = notEmpty();

    out << "Enter model: " << Qt::endl;
    model = notEmpty();

    pricePerDay = validPrice();

    out << "Is this vehicle currently rented: " << Qt::endl;
    isRented = rentStatus();

    switch (option) {
    case 1:
        out << addCar(manager,
                      id,
                      brand,
                      model,
                      pricePerDay,
                      isRented);
        break;
    case 2:
        addMotorcycle(manager,
                      id,
                      brand,
                      model,
                      pricePerDay,
                      isRented);
        break;
    default:
        out << "Failed. Try again" << Qt::endl;
    }
}