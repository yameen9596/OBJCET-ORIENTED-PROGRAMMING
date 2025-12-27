#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three boolean values (0 or 1): ";
    cin >> a >> b >> c;

    
    int AND = a * b * c;                    
    int OR = (a + b + c >= 1);              
    int NOT_A = (a == 0);                  
    int XOR = ((a + b + c) % 2 == 1);       

    cout << "\nResults:\n";
    cout << "AND  = " << AND << endl;
    cout << "OR   = " << OR << endl;
    cout << "NOT A = " << NOT_A << endl;
    cout << "XOR  = " << XOR << endl;

    return 0;
}

