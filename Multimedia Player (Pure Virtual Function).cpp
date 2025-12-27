#include <iostream>
using namespace std;

class MediaFile
{
public:
    virtual void play() = 0;
};

class Audio : public MediaFile
{
public:
    void play() { cout << "Playing Audio\n"; }
};

class Video : public MediaFile
{
public:
    void play() { cout << "Playing Video\n"; }
};

class Image : public MediaFile
{
public:
    void play() { cout << "Displaying Image\n"; }
};

int main()
{
    MediaFile* m[3];
    Audio a; Video v; Image i;

    m[0] = &a;
    m[1] = &v;
    m[2] = &i;

    for (int j = 0; j < 3; j++)
        m[j]->play();

    return 0;
}

