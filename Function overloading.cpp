#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}
string sum(string a, string b)
{
    return a + b;
}
int main()
{
    int int1, int2, int3;
    string str1, str2;

    cout << "Enter two integers to add: ";
    cin >> int1 >> int2;
    cout << "Sum of two integers: " << sum(int1, int2) << endl;

    cout << "Enter three integers to add: ";
    cin >> int1 >> int2 >> int3;
    cout << "Sum of three integers: " << sum(int1, int2, int3) << endl;

    cout << "Enter two strings to concatenate: ";
    cin >> str1 >> str2;
    cout << "Concatenated string: " << sum(str1, str2) << endl;

    return 0;
}
