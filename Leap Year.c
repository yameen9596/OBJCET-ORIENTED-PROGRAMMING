#include<stdio.h>
int main(){
	int x;
	printf("Enter a year:");
	scanf("%d", &x);
	if(x%4==0){
		if(x%100==0){
			if(x%400==0){
				printf("Leap year");
			}
			else
			printf("Not a Leap Year");
		}
		else
		printf("Leap year");
	}
	else 
	printf("Not a Leap Year");
	return 0;	
}

