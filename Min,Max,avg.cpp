#include <iostream>
using namespace std;

int smallest(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int largest(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int avg(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum / n;
}

int main()
{
    int i, min, max, average, arr[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " integers: ";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    min = smallest(arr, n);
    max = largest(arr, n);
    average = avg(arr, n);

    cout << "Smallest: " << min << endl;
    cout << "Largest: " << max << endl;
    cout << "Average: " << average << endl;

    return 0;
}

