#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
};

class Circle : public Shape
{
    float r;
public:
    void area()
    {
        cout << "Enter radius: ";
        cin >> r;
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

class Rectangle : public Shape
{
    float l, b;
public:
    void area()
    {
        cout << "Enter length and breadth: ";
        cin >> l >> b;
        cout << "Area of Rectangle = " << l * b << endl;
    }
};

class Square : public Shape
{
    float s;
public:
    void area()
    {
        cout << "Enter side: ";
        cin >> s;
        cout << "Area of Square = " << s * s << endl;
    }
};

int main()
{
    Shape* s;
    Circle c; Rectangle r; Square sq;
    int ch;

    cout << "1.Circle 2.Rectangle 3.Square : ";
    cin >> ch;

    if (ch == 1) s = &c;
    else if (ch == 2) s = &r;
    else s = &sq;

    s->area();
    return 0;
}

