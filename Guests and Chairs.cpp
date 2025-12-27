#include<iostream>
using namespace std;
int main()
{
	int c,g,i;
	long long unsigned arr=1;
	cout<<"Enter number of guests:";
	cin>>g;
	cout<<"Enter number of chairs:";
	cin>>c;
	cout<<"Possible arrangements are:";
	if(g>c){
		for(i=g;i>g-c;i--){
			cout<<i;
			arr=arr*i;
			if(i==g-c+1)
			break;
			cout<<"x";
		}
	}
	else cout<<"Number of Guests should be more";
	cout<<"="<<arr;
	return 0;
	
}
