#include <iostream>
using namespace std;

class Rectangle
{
    float length, width;

public:
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    Rectangle(float l)
    {
        length = width = l;
    }

    void display()
    {
        cout << "Area = " << length * width << endl;
        cout << "Perimeter = " << 2 * (length + width) << endl;
    }
};

int main()
{
    Rectangle r1(10, 5);
    Rectangle r2(6);

    r1.display();
    r2.display();

    return 0;
}

