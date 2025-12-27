#include <iostream>
using namespace std;
void swapReference(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
    cout << "Inside swapReference function: x = " << x << ", y = " << y << endl;
}
int main()
{
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Before swapReference function: a = " << a << ", b = " << b << endl;
    swapReference(a, b);
    cout << "After swapReference function: a = " << a << ", b = " << b << endl;

    return 0;
}
