#include <iostream>
using namespace std;

class Number {
    int value;

public:
   Number():value(0){ }
   
    Number(int v) : value(v) {}

   
    bool operator > (Number obj) {
        return value > obj.value;
    }

    
    bool operator < (Number obj) {
        return value < obj.value;
    }

    
    bool operator == (Number obj) {
        return value == obj.value;
    }
};

int main() {
    Number n1(10);
    Number n2(20);

    if (n1 > n2)
        cout << "n1 is greater" << endl;
    else
        cout << "n1 is NOT greater" << endl;

    if (n1 < n2)
        cout << "n1 is smaller" << endl;

    if (n1 == n2)
        cout << "Both are equal" << endl;
    else
        cout << "Both are NOT equal" << endl;

    return 0;
}
