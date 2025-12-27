#include <iostream>
using namespace std;

class Student
{
public:
    virtual void calculateResult() = 0;
};

class Undergraduate : public Student
{
    int marks;
public:
    void calculateResult()
    {
        cout << "Enter UG marks: ";
        cin >> marks;
        cout << (marks >= 40 ? "Pass\n" : "Fail\n");
    }
};

class Postgraduate : public Student
{
    int marks;
public:
    void calculateResult()
    {
        cout << "Enter PG marks: ";
        cin >> marks;
        cout << (marks >= 50 ? "Pass\n" : "Fail\n");
    }
};

int main()
{
    Student* s;
    Undergraduate u;
    Postgraduate p;
    int ch;

    cout << "1.UG 2.PG: ";
    cin >> ch;

    if (ch == 1) s = &u;
    else s = &p;

    s->calculateResult();
    return 0;
}

