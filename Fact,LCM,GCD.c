#include <stdio.h>

long long fact(int n) {
    long long f = 1;
    int i;
    for ( i = 1; i <= n; i++) {      
        f = f * i;
    }
    return f;
}

int gcd(int a, int b) {
    int t;
    while (b != 0) {                    
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int ch;

    do {
        printf("1. Factorial\n");
        printf("2. GCD\n");
        printf("3. LCM\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: {
                int n;
                printf("Enter number: ");
                scanf("%d", &n);
                printf("Factorial = %lld\n", fact(n));
                break;
            }

            case 2: {
                int x, y;
                printf("Enter two numbers: ");
                scanf("%d %d", &x, &y);
                printf("GCD = %d\n", gcd(x, y));
                break;
            }

            case 3: {
                int x, y;
                printf("Enter two numbers: ");
                scanf("%d %d", &x, &y);
                printf("LCM = %d\n", lcm(x, y));
                break;
            }

            case 4:
                printf("Exiting\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while (ch != 4);   

    return 0;
}

