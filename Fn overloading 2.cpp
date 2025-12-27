#include <iostream>
#include <string>
using namespace std;

void display(int num)
{
    cout << "Integer: " << num << endl;
}

void display(float num)
{
    cout << "Float: " << num << endl;
}

void display(const string& str)
{
    cout << "String: " << str << endl;
}

int main()
{
    int intValue;
    float floatValue;
    string stringValue;

    cout << "Enter an integer: ";
    cin >> intValue;
    display(intValue);

    cout << "Enter a float: ";
    cin >> floatValue;
    display(floatValue);

    cin.ignore();   

    cout << "Enter a string: ";
    getline(cin, stringValue);
    display(stringValue);

    return 0;
}

