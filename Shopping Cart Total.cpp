#include <iostream>
using namespace std;

class Item
{
    int *price, *quantity;

public:
    Item(int p, int q)
    {
        price = new int(p);
        quantity = new int(q);
    }

    void total()
    {
        cout << "Total Cost = " << (*price) * (*quantity) << endl;
    }

    ~Item()
    {
        delete price;
        delete quantity;
    }
};

int main()
{
    Item i(50, 4);
    i.total();
    return 0;
}

