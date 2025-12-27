#include <iostream>
using namespace std;

class Transport
{
public:
    virtual void fare(int d) = 0;
};

class Bus : public Transport
{
public:
    void fare(int d)
    {
        cout << "Bus Fare = " << d * 2 << endl;
    }
};

class Train : public Transport
{
public:
    void fare(int d)
    {
        cout << "Train Fare = " << d * 3 << endl;
    }
};

class Flight : public Transport
{
public:
    void fare(int d)
    {
        cout << "Flight Fare = " << d * 10 << endl;
    }
};

int main()
{
    Transport* t;
    Bus b; Train tr; Flight f;
    int ch, d;

    cout << "Enter distance: ";
    cin >> d;
    cout << "1.Bus 2.Train 3.Flight: ";
    cin >> ch;

    if (ch == 1) t = &b;
    else if (ch == 2) t = &tr;
    else t = &f;

    t->fare(d);
    return 0;
}

