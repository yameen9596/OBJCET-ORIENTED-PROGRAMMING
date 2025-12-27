#include <stdio.h>

int main() {
    float x;
    float p;

    printf("Enter Annual Income: ");
    scanf("%f", &x);

    if (x <= 250000) {
        printf("No Tax");
    }
    else if (x > 250000 && x <= 500000) {
        p = x * 0.05;
        printf("Annual Income Tax: %.2f", p);
    }
    else if (x > 500000 && x <= 1000000) {
        p = x * 0.20;
        printf("Annual Income Tax: %.2f", p);
    }
    else {
        p = x * 0.30;
        printf("Annual Income Tax: %.2f", p);
    }

    return 0;
}

