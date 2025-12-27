#include <stdio.h>

int main() {
    int x, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x == 0) {
        printf("Invalid");
    } else {
        while (x > 0) {
            rem = x % 10;         
            rev = rev * 10 + rem; 
            x = x / 10;           
        }
        printf("Reversed number: %d", rev);
    }

    return 0;
}

