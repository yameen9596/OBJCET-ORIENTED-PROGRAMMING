#include <stdio.h>

int main() {
    int n, t, i;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &t);

    int total = 1;
    for (i = 0; i < n; i++) {     
        total = total * 2;
    }

    printf("Subsets with sum %d:\n", t);
    int m;
    for (m = 0; m < total; m++) {
        int temp = m;
        int sum = 0;

      
        for (i = 0; i < n; i++) {
            if (temp % 2 == 1) {
                sum = sum + arr[i];
            }
            temp = temp / 2;
        }

       
        if (sum == t) {
            temp = m;          
            int first = 1;
            printf("{ ");
            for ( i = 0; i < n; i++) {
                if (temp % 2 == 1) {
                    if (!first) printf(", ");
                    printf("%d", arr[i]);
                    first = 0;
                }
                temp = temp / 2;
            }
            printf(" }\n");
        }
    }

    return 0;
}

