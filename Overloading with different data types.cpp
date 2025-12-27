#include <iostream>
#include <string>
using namespace std;


void display(int value) {
    cout << "Displaying integer: " << value << endl;
}

void display(float value) {
    cout << "Displaying float: " << value << endl;
}

void display(string value) {
    cout << "Displaying string: " << value << endl;
}

int main() {
    int intVal;
    float floatVal;
    string strVal;

    cout << "Enter an integer: ";
    cin >> intVal;

    cout << "Enter a float: ";
    cin >> floatVal;

    cout << "Enter a string: ";
    cin.ignore(); 
    getline(cin, strVal);

    cout << "\nFunction Overloading Demonstration:\n";
    display(intVal);    
    display(floatVal);  
    display(strVal);     

    return 0;
}
