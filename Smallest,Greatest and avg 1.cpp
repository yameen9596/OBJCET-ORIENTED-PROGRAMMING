#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter how many numbers you want:";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }

    int avg=sum/n;
    int max=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }

    int min=a[0];
    for(i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }

    cout<<"The largest number is:";
    cout<<max;
    cout<<"\nThe smallest number is:";
    cout<<min;
    cout<<"\nThe average is:";
    cout<<avg;

    return 0;
}

