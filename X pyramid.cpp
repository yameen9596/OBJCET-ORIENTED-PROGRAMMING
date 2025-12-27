#include<iostream>
using namespace std;
int main()
{
	int r,i,j;
	cout<<"Enter number of rows:";
	cin>>r;
	for(i=0;i<r;i++){
		for(j=0;j<2*i+1;j++)
		cout<<"X";
		cout<<"\n";
	}
	return 0;
}

