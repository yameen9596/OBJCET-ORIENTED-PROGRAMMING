#include <iostream>
using namespace std;

class Temperature
{
    float c;

public:
    Temperature(float celsius)
    {
        c = celsius;
    }

    void display()
    {
        float f = (c * 9 / 5) + 32;
        cout << "Celsius = " << c << endl;
        cout << "Fahrenheit = " << f << endl;
    }
};

int main()
{
    Temperature t(25);
    t.display();
    return 0;
}

