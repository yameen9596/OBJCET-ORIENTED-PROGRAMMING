#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int hd=0,pd=0,cd=0;
    cout<<"Enter the number of days:";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cout<<"Enter the temperature for day "<<i+1<<":";
        cin>>a[i];
    }

    for(i=0;i<n;i++){
        if(a[i]>=85)
            hd++;
        else if(a[i]>=60 && a[i]<=84)
            pd++;
        else
            cd++;
    }

    cout<<"\nThe number of Hot days are:"<<hd;
    cout<<"\nThe number of Pleasant days are:"<<pd;
    cout<<"\nThe number of Cold days are:"<<cd;

    return 0;
}

