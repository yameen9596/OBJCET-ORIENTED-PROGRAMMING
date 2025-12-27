#include<stdio.h>
int main()
{
	int n,i;
	int a=0, b=1, next;
	printf("Enter the number for which fibonnaci series is to be calculated:");
	scanf("%d", &n);
	printf("\nFibonacci Series:");
	for(i=1;i<=n;i++){
		printf(" %d",a);
		next= a+b;
		a=b;
		b=next;
	}
	return 0;
}
