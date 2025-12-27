#include <stdio.h>
int main() {
    float a, b, res;
    char c;  

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Enter operator (+ - * / %%): ");
    scanf(" %c", &c);

    res = (c == '+') ? a + b :
          (c == '-') ? a - b :
          (c == '*') ? a * b :
          (c == '/' && b != 0) ? a / b :
          (c == '%' && (int)b != 0) ? (int)a % (int)b : 0;

    if (c == '/' && b == 0)
        printf("Division by zero\n");
    else if (c == '%' && (int)b == 0)
        printf("Division by zero\n");
    else if (c != '+' && c != '-' && c != '*' && c != '/' && c != '%')
        printf("Invalid operator\n");
    else
        printf("Result = %.2f\n", res);

    return 0;
}

