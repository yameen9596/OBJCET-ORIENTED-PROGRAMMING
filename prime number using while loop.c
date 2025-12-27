#include <stdio.h>

int main() {
    int n, i = 2, p = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        p = 0; 
    } else {
        while (i <= n / 2) {
            if (n % i == 0) {
                p= 0; 
                break;     
            }
            i++;
        }
    }

    if (p)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
