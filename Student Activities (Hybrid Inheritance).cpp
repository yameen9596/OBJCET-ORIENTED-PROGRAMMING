#include <iostream>
using namespace std;

class Student
{
protected:
    string name;

public:
    void getName()
    {
        cout << "Enter student name: ";
        cin >> name;
    }
};

class Sports : virtual public Student
{
protected:
    int sportsScore;

public:
    void getSports()
    {
        cout << "Enter sports score: ";
        cin >> sportsScore;
    }
};

class Academics : virtual public Student
{
protected:
    int academicScore;

public:
    void getAcademics()
    {
        cout << "Enter academic score: ";
        cin >> academicScore;
    }
};

class Result : public Sports, public Academics
{
public:
    void display()
    {
        cout << "\nName: " << name;
        cout << "\nFinal Score: " << sportsScore + academicScore << endl;
    }
};

int main()
{
    Result r;
    r.getName();
    r.getSports();
    r.getAcademics();
    r.display();
    return 0;
}

