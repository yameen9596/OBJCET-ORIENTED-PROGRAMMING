#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d %d", &a, &b);
	printf("\nPress + for addition");
	printf("\nPress - for substraction");
	printf("\nPress * for multiplication");
	printf("\nPress / for division");
	printf("\n");
	char c;
	scanf(" %c",&c);
	switch (c){
		case '+': printf("Addition of two numbers is:%d", a+b);
		break;
		case '-': printf("Substraction of two numbers is:%d", a-b);
		break;
		case '*': printf("Multiplication of two numbers is:%d", a*b);
		break;
		case '/':
    if(b == 0)
        printf("Error: Division by zero is not allowed.");
    else
        printf("Division of two numbers is: %d", a/b);
    break;
		default:printf("Invalid option");
	}
	return 0;
	
	}
