#include <stdio.h>
#include <math.h>
int main() {
    double r1, i1, r2, i2;
    printf("Enter real and imaginary part of first complex number: ");
    scanf("%lf %lf", &r1, &i1);
    printf("Enter real and imaginary part of second complex number: ");
    scanf("%lf %lf", &r2, &i2);

    double m1 = sqrt(r1*r1 + i1*i1);
    double m2 = sqrt(r2*r2 + i2*i2);

    if(m1 > m2)
        printf("First complex number is greater\n");
    else if(m2 > m1)
        printf("Second complex number is greater\n");
    else
        printf("Equal\n");
    return 0;
}

