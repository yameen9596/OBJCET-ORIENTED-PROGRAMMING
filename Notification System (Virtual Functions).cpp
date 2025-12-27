#include <iostream>
using namespace std;

class Notification
{
public:
    virtual void send() = 0;
};

class EmailNotification : public Notification
{
public:
    void send() { cout << "Sending Email\n"; }
};

class SMSNotification : public Notification
{
public:
    void send() { cout << "Sending SMS\n"; }
};

class AppNotification : public Notification
{
public:
    void send() { cout << "Sending App Notification\n"; }
};

int main()
{
    Notification* n;
    EmailNotification e;
    SMSNotification s;
    AppNotification a;

    int ch;
    cout << "1.Email 2.SMS 3.App: ";
    cin >> ch;

    if (ch == 1) n = &e;
    else if (ch == 2) n = &s;
    else n = &a;

    n->send();
    return 0;
}

