#include <stdio.h>
#include <math.h>

int main() {
    int n, x, y;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    int limit = (int)sqrt(n);

    printf("Pairs (x, y) such that x^2 + y^2 = %d:\n", n);

    for (x = 0; x <= limit; x++) {
        for (y = 0; y <= limit; y++) {
            int s = x*x + y*y;

            if (s > n) {
                break;
            }

            if (s< n) {
                continue;
            }

            printf("(%d, %d)\n", x, y);
        }
    }

    return 0;
}
