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
        cout << "Area of circle = " << 3.14 * r * r << endl;
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
        cout << "Area of rectangle = " << l * b << endl;
    }
};

class Triangle : public Shape
{
    float b, h;
public:
    void area()
    {
        cout << "Enter base and height: ";
        cin >> b >> h;
        cout << "Area of triangle = " << 0.5 * b * h << endl;
    }
};

int main()
{
    Circle c;
    Rectangle r;
    Triangle t;

    c.area();
    r.area();
    t.area();

    return 0;
}

