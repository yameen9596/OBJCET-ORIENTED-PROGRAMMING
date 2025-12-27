#include <iostream>
using namespace std;

class Teacher
{
protected:
    string subject;

public:
    void getTeacher()
    {
        cout << "Enter subject taught: ";
        cin >> subject;
    }
};

class Researcher
{
protected:
    int papers;

public:
    void getResearch()
    {
        cout << "Enter number of research papers: ";
        cin >> papers;
    }
};

class Faculty : public Teacher, public Researcher
{
public:
    void display()
    {
        cout << "\nSubject: " << subject;
        cout << "\nResearch Papers: " << papers << endl;
    }
};

int main()
{
    Faculty f;
    f.getTeacher();
    f.getResearch();
    f.display();
    return 0;
}

