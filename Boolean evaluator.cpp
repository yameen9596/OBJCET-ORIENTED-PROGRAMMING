#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two boolean values (0 or 1): ";
    cin >> a >> b;

   
    int AND = a * b;             
    int OR = (a + b >= 1);      
    int NOT_A = (a == 0);        
    int XOR = (a + b == 1);     

    cout << "\nResults:\n";
    cout << "AND  = " << AND << endl;
    cout << "OR   = " << OR << endl;
    cout << "NOT A = " << NOT_A << endl;
    cout << "XOR  = " << XOR << endl;

    return 0;
}

