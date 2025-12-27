#include <iostream>
using namespace std;
float simpleInterest(float p, float r = 5.0, float t = 2.0)
{
    return (p * r * t) / 100;
}
int main()
{
    float principal, rate, time;

    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest: ";
    cin >> rate;
    cout << "Enter time period in years: ";
    cin >> time;

    cout << "Simple Interest (all args): " << simpleInterest(principal, rate, time) << endl;

    cout << "Simple Interest (default time): " << simpleInterest(principal, rate) << endl;

    cout << "Simple Interest (default rate and time): " << simpleInterest(principal) << endl;

    return 0;
}
