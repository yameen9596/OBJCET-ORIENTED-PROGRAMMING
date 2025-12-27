#include <iostream>
using namespace std;

class Speed
{
    float distance, time;

public:
    Speed(float d, float t)
    {
        distance = d;
        time = t;
    }

    void calculate()
    {
        cout << "Speed = " << distance / time << " km/hr\n";
    }
};

int main()
{
    Speed s(120, 2);
    s.calculate();
    return 0;
}

