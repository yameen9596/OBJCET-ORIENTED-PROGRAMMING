#include <stdio.h>


int a(int a, int b) {
    return a + b;
}

int s(int a, int b) {
    return a - b;
}

int m(int a, int b) {
    return a * b;
}

float d(int a, int b) {
    if (b == 0) {
        printf("Error!\n");
        return 0;
    }
    return (float)a / b;
}

int mod(int a, int b) {
    if (b == 0) {
        printf("Error\n");
        return 0;
    }
    return a % b;
}

int main() {
    int num1, num2;
    char c;

    
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nPress + for addition");
	printf("\nPress - for substraction");
	printf("\nPress * for multiplication");
	printf("\nPress / for division");
	printf("\nPress v for Modulas\n");
    scanf(" %c", &c);

   
    switch (c) {
        case '+':
            printf("Result: %d\n", a(num1, num2));
            break;

        case '-':
            printf("Result: %d\n", s(num1, num2));
            break;

        case '*':
            printf("Result: %d\n", m(num1, num2));
            break;

        case '/':
            printf("Result: %.2f\n", d(num1, num2));
            break;

        case 'v':
            printf("Result: %d\n", mod(num1, num2));
            break;

        default:
            printf("Invalid\n");
    }

    return 0;
}
