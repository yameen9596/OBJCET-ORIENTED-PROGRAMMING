#include <iostream>
using namespace std;

class Account
{
protected:
    float balance;

public:
    void setBalance(float b)
    {
        balance = b;
    }
};

class SavingsAccount : public Account
{
public:
    void deposit(float amt)
    {
        balance += amt;
    }

    void withdraw(float amt)
    {
        balance -= amt;
    }

    void display()
    {
        cout << "Balance = " << balance << endl;
    }
};

int main()
{
    SavingsAccount s;
    float bal, dep, wit;

    cout << "Enter initial balance: ";
    cin >> bal;
    s.setBalance(bal);

    cout << "Enter deposit amount: ";
    cin >> dep;
    s.deposit(dep);

    cout << "Enter withdrawal amount: ";
    cin >> wit;
    s.withdraw(wit);

    s.display();
    return 0;
}

