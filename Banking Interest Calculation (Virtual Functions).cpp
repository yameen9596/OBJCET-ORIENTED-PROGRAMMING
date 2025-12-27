#include <iostream>
using namespace std;

class BankAccount
{
public:
    virtual void interest() = 0;
};

class SavingsAccount : public BankAccount
{
    float p;
public:
    void interest()
    {
        cout << "Enter amount: ";
        cin >> p;
        cout << "Interest = " << p * 0.04 << endl;
    }
};

class FixedDeposit : public BankAccount
{
    float p;
public:
    void interest()
    {
        cout << "Enter amount: ";
        cin >> p;
        cout << "Interest = " << p * 0.07 << endl;
    }
};

class RecurringDeposit : public BankAccount
{
    float p;
public:
    void interest()
    {
        cout << "Enter monthly deposit: ";
        cin >> p;
        cout << "Interest = " << p * 12 * 0.06 << endl;
    }
};

int main()
{
    BankAccount* b;
    SavingsAccount s; FixedDeposit f; RecurringDeposit r;

    int ch;
    cout << "1.Savings 2.Fixed 3.Recurring: ";
    cin >> ch;

    if (ch == 1) b = &s;
    else if (ch == 2) b = &f;
    else b = &r;

    b->interest();
    return 0;
}

