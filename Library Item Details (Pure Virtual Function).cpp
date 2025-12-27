#include <iostream>
using namespace std;

class LibraryItem
{
public:
    virtual void displayInfo() = 0;
};

class Book : public LibraryItem
{
public:
    void displayInfo() { cout << "Book Item\n"; }
};

class Magazine : public LibraryItem
{
public:
    void displayInfo() { cout << "Magazine Item\n"; }
};

class DVD : public LibraryItem
{
public:
    void displayInfo() { cout << "DVD Item\n"; }
};

int main()
{
    LibraryItem* l[3];
    Book b;
    Magazine m;
    DVD d;

    l[0] = &b;
    l[1] = &m;
    l[2] = &d;

    for (int i = 0; i < 3; i++)
        l[i]->displayInfo();

    return 0;
}

