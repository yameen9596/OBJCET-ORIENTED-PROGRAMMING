#include<stdio.h>

int main() {
    int  n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter the %d number: ", i+1);
	    scanf("%d", &a[i]);
    }
    int max=a[0];
    for(i=0;i<n;i++){
    	if(a[i]>max)
	{
      max=a[i];
	}
	}
	printf("The largest number in the array is:%d",max);
	return 0;
    
}
