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
    QString engineCapacityCCString = in.readLine();
    engineCapacityCC = engineCapacityCCString.toInt();

    manager.addVehicle(
        new Motorcycle(
            id,
            brand,
            model,
            pricePerDay,
            isRented,
            engineCapacityCC)
        );

    out << "Object created" << Qt::endl;
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
    QString numberOfDoorsString = in.readLine();
    numberOfDoors = numberOfDoorsString.toInt();

    out << "Enter numberOfSeats: " << Qt::endl;
    QString numberOfSeatsString = in.readLine();
    numberOfSeats = numberOfSeatsString.toInt();

    manager.addVehicle(
        new Car(
            id,
            brand,
            model,
            pricePerDay,
            isRented,
            numberOfSeats,
            numberOfDoors)
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
    bool isRented;

    do {
        out << "Type of Vehicle to add:" << Qt::endl;
        out << "1. Car" << Qt::endl;
        out << "2. MotorCycle" << Qt::endl;

        out << "Enter option: " << Qt::endl;
        QString optionString = in.readLine();

        bool ok;
        option = optionString.toInt(&ok);

        if(!ok || (option != 1 && option != 2))
        {
            out << "Invalid number!" << Qt::endl;
        }
    } while (option != 1 && option != 2);

    out << "Enter id: " << Qt::endl;
    id = in.readLine();

    out << "Enter brand: " << Qt::endl;
    brand = in.readLine();

    out << "Enter model: " << Qt::endl;
    model = in.readLine();

    out << "Enter price Per Day: " << Qt::endl;
    QString pricePerDayString = in.readLine();
    pricePerDay = pricePerDayString.toDouble();

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