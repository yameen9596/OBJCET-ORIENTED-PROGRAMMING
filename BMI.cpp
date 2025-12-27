#include <iostream>
using namespace std;

class BMI
{
    float weight, height;

public:
    BMI(float w, float h)
    {
        weight = w;
        height = h;
    }

    void calculate()
    {
        float bmi = weight / (height * height);
        cout << "BMI = " << bmi << endl;

        if (bmi < 18.5)
            cout << "Underweight\n";
        else if (bmi < 25)
            cout << "Normal\n";
        else
            cout << "Overweight\n";
    }
};

int main()
{
    BMI b(65, 1.7);
    b.calculate();
    return 0;
}

