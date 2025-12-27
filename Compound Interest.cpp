#include <iostream>
#include <cmath>
using namespace std;

class CompoundInterest
{
    float p, r, t;
    int n;

public:
    CompoundInterest(float principal, float rate, float time, int num = 1)
    {
        p = principal;
        r = rate;
        t = time;
        n = num;
    }

    void calculate()
    {
        float amount = p * pow((1 + r / (100 * n)), n * t);
        cout << "Compound Interest = " << amount - p << endl;
    }
};

int main()
{
    CompoundInterest c(1000, 10, 2);
    c.calculate();
    return 0;
}

