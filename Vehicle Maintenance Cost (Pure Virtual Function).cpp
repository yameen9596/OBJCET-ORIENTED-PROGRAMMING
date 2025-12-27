#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual void maintenanceCost() = 0;
};

class Car : public Vehicle
{
public:
    void maintenanceCost()
    {
        cout << "Car Maintenance = 5000\n";
    }
};

class Bike : public Vehicle
{
public:
    void maintenanceCost()
    {
        cout << "Bike Maintenance = 2000\n";
    }
};

class Truck : public Vehicle
{
public:
    void maintenanceCost()
    {
        cout << "Truck Maintenance = 10000\n";
    }
};

int main()
{
    Vehicle* v;
    Car c; Bike b; Truck t;
    int ch;

    cout << "1.Car 2.Bike 3.Truck: ";
    cin >> ch;

    if (ch == 1) v = &c;
    else if (ch == 2) v = &b;
    else v = &t;

    v->maintenanceCost();
    return 0;
}

