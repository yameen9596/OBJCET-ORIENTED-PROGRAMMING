#include <iostream>
using namespace std;

class Interest
{
    float p, r, t;

public:
    Interest(float principal, float rate, float time)
    {
        p = principal;
        r = rate;
        t = time;
    }

    void calculate()
    {
        float si = (p * r * t) / 100;
        cout << "Simple Interest = " << si << endl;
    }
};

int main()
{
    Interest obj(1000, 5, 2);
    obj.calculate();
    return 0;
}

