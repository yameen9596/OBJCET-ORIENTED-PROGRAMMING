#include <iostream>
using namespace std;

class Distance
{
    int m, cm;

public:
    Distance(int meters)
    {
        m = meters;
        cm = 0;
    }

    Distance(int meters, int centimeters)
    {
        m = meters;
        cm = centimeters;
    }

    void add(Distance d)
    {
        int total_cm = cm + d.cm;
        int total_m = m + d.m + total_cm / 100;
        total_cm %= 100;

        cout << "Total Distance = " << total_m << " m " << total_cm << " cm\n";
    }
};

int main()
{
    Distance d1(5, 60);
    Distance d2(3, 80);

    d1.add(d2);
    return 0;
}

