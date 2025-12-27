#include<iostream>
#include<cmath>
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

    int sq=sum*sum;
    int avg=sum/n;
    int max=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max)
            max=a[i];
    }

    int min=a[0];
    for(i=0;i<n;i++){
        if(a[i]<min)
            min=a[i];
    }

    float sd=sqrt((sq/n)-avg*avg);

    cout<<"The range of data is:";
    cout<<min<<" < x < "<<max;
    cout<<"\nThe standard deviation is:";
    cout<<sd;

    return 0;
}

