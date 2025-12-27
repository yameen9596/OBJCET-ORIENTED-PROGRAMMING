#include <iostream>
using namespace std;

class Employee
{
protected:
    int id;
    string name;
    float basic;

public:
    void getEmployee()
    {
        cout << "Enter employee ID: ";
        cin >> id;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter basic salary: ";
        cin >> basic;
    }
};

class Salary : public Employee
{
public:
    void calculate()
    {
        float hra = basic * 0.2;
        float da = basic * 0.1;
        float pf = basic * 0.05;
        float net = basic + hra + da - pf;

        cout << "\nEmployee ID: " << id;
        cout << "\nName: " << name;
        cout << "\nNet Salary: " << net << endl;
    }
};

int main()
{
    Salary s;
    s.getEmployee();
    s.calculate();
    return 0;
}

