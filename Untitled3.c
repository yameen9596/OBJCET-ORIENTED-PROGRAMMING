#include <stdio.h>

int main() {
    int marks[5], i, t = 0;
    float avg, p;
    char g;

    printf("Enter marks of 5 subjects: \n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        t+= marks[i];
    }

    avg= t / 5.0;
    p = (t / 500.0) * 100;

    if (p >= 90)
        g = 'A';
    else if (p >= 70)
        g = 'B';
    else if (p >= 50)
        g= 'C';
    else if (p>= 33)
        g = 'D';
    else
        g = 'F';

    printf("\nTotal = %d\n", t);
    printf("Average = %.2f\n", avg);
    printf("Percentage = %.2f%%\n", p);
    printf("Grade = %c\n", g);

    return 0;
}

