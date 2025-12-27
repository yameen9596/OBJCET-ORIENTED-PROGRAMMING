#include <stdio.h>
int main(){
    int n,rem,sum=0,p=1;
    printf("Enter an integer: ");
    scanf("%d",&n);
    if(n==0) p=0;
    while(n>0){
        rem=n%10;
        sum+=rem;
        p*=rem;
        n/=10;
    }
    printf("Sum of digits: %d\nProduct of digits: %d\n",sum,p);
    return 0;
}

