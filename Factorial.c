#include<stdio.h>
int main()
{
	long long unsigned fact=1;
	int n,i;
	printf("Enter the number for which factorial is to be calculated:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fact*=i;
	}
	printf("Factorial of %d is:%llu",n,fact);
	return 0;

	
}
