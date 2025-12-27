#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, i;
    float num, sum = 0, sum_squares = 0, avg, stddev;
    float smallest, largest, range;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter number 1: ";
    cin >> num;
    smallest = largest = num;
    sum = num;
    sum_squares = num * num;

    for (i = 2; i <= n; i++)
    {
        cout << "Enter number " << i << ": ";
        cin >> num;
        sum += num;
        sum_squares += num * num;

        if (num < smallest)
            smallest = num;
        if (num > largest)
            largest = num;
    }

    avg = sum / n;
    range = largest - smallest;
    stddev = sqrt((sum_squares / n) - (avg * avg));

    cout << "\nRange = " << range << endl;
    cout << "Standard Deviation = " << stddev << endl;

    return 0;
}

