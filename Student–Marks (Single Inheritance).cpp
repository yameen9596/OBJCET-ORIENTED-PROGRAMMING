#include <iostream>
using namespace std;

class Student
{
protected:
    string name;
    int roll;

public:
    void getStudent()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll;
    }
};

class Marks : public Student
{
    int m1, m2, m3;

public:
    void getMarks()
    {
        cout << "Enter marks of 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }

    void display()
    {
        int total = m1 + m2 + m3;
        float percent = total / 3.0;

        cout << "\nName: " << name;
        cout << "\nRoll: " << roll;
        cout << "\nTotal: " << total;
        cout << "\nPercentage: " << percent << "%\n";
    }
};

int main()
{
    Marks m;
    m.getStudent();
    m.getMarks();
    m.display();
    return 0;
}

