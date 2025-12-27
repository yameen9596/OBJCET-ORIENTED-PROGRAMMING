#include <stdio.h>

struct Employee {
    int id;
    float wage;
    float hours;
    float gross;
    float net;
};

int main() {
    int n, i;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];
    float totalPayroll = 0;

    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Hourly wage: ");
        scanf("%f", &emp[i].wage);
        printf("Hours worked: ");
        scanf("%f", &emp[i].hours);

       
        if (emp[i].hours > 40)
            emp[i].gross = (40 * emp[i].wage) + ((emp[i].hours - 40) * emp[i].wage * 1.5);
        else
            emp[i].gross = emp[i].hours * emp[i].wage;

      
        emp[i].net = emp[i].gross - (emp[i].gross * 0.03625);

        totalPayroll += emp[i].net;
    }

    
    printf("\nEmployee Payroll Details:\n");
    for (i = 0; i < n; i++) {
        printf("Employee ID: %d \n Net Pay: %.2f\n", emp[i].id, emp[i].net);
    }

    printf("\nTotal Payroll: %.2f", totalPayroll);
    printf("\nAverage Pay: %.2f", totalPayroll / n);

    return 0;
}
