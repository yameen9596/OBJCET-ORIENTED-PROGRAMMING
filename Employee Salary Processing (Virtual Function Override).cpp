#include <iostream>
using namespace std;

class Employee
{
public:
    virtual void calculateSalary() = 0;
};

class FullTimeEmployee : public Employee
{
    float basic;
public:
    void calculateSalary()
    {
        cout << "Enter basic salary: ";
        cin >> basic;
        cout << "Salary = " << basic + 2000 << endl;
    }
};

class PartTimeEmployee : public Employee
{
    int hours;
public:
    void calculateSalary()
    {
        cout << "Enter hours worked: ";
        cin >> hours;
        cout << "Salary = " << hours * 300 << endl;
    }
};

class Intern : public Employee
{
public:
    void calculateSalary()
    {
        cout << "Intern Salary = 8000\n";
    }
};

int main()
{
    Employee* e;
    FullTimeEmployee f;
    PartTimeEmployee p;
    Intern i;

    int ch;
    cout << "1.Full Time 2.Part Time 3.Intern: ";
    cin >> ch;

    if (ch == 1) e = &f;
    else if (ch == 2) e = &p;
    else e = &i;

    e->calculateSalary();
    return 0;
}

