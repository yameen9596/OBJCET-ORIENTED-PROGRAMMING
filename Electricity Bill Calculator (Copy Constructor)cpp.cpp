#include <iostream>
using namespace std;

class Bill
{
    int units;

public:
    Bill(int u)
    {
        units = u;
    }

    Bill(const Bill &b)
    {
        units = b.units;
    }

    void display()
    {
        cout << "Total Bill = Rs. " << units * 5 << endl;
    }
};

int main()
{
    Bill b1(100);
    Bill b2 = b1;

    b1.display();
    b2.display();

    return 0;
}

