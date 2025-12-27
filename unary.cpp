#include <iostream>
using namespace std;
class Number {
    int value;
    public: 
    Number():value(0){}
    Number(int v) : value (v) { }
    Number operator -() {
        return Number (-value);
    }
    void display() {
        cout << "value: " << value << endl;
    }
    };
    int main() {
        Number n1 (5);
        cout<< "original: ";
        n1.display();
        Number n2 = -n1;
        cout<< "After unary minus: ";
        n2.display();
        return 0;
    }
