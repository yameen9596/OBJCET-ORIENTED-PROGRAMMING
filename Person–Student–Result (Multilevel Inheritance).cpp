#include <iostream>
using namespace std;

class Person
{
protected:
    string name;

public:
    void getPerson()
    {
        cout << "Enter name: ";
        cin >> name;
    }
};

class Student : public Person
{
protected:
    int roll;

public:
    void getStudent()
    {
        cout << "Enter roll number: ";
        cin >> roll;
    }
};

class Result : public Student
{
    int m1, m2, m3;

public:
    void getMarks()
    {
        cout << "Enter 3 marks: ";
        cin >> m1 >> m2 >> m3;
    }

    void display()
    {
        int total = m1 + m2 + m3;
        cout << "\nName: " << name;
        cout << "\nRoll: " << roll;
        cout << "\nTotal Marks: " << total << endl;
    }
};

int main()
{
    Result r;
    r.getPerson();
    r.getStudent();
    r.getMarks();
    r.display();
    return 0;
}

