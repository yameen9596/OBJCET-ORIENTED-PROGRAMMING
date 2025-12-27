#include <iostream>
using namespace std;


void findMinMax(int *arr, int n, int &min, int &max) {
    min = *arr; 
    max = *arr;

    for (int i = 1; i < n; i++) {
        if (*(arr + i) < min)
            min = *(arr + i);
        if (*(arr + i) > max)
            max = *(arr + i);
    }
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int minVal, maxVal;
    findMinMax(arr, n, minVal, maxVal);

    cout << "\nMinimum value = " << minVal << endl;
    cout << "Maximum value = " << maxVal << endl;

    return 0;
}
