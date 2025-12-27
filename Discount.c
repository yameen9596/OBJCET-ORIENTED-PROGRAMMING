#include <stdio.h>
int main(){
    double amt,dis;
    printf("Enter purchase amount: ");
    scanf("%lf",&amt);
    dis  = (amt<100)?0:
           (amt<=500)?0.10*amt:
           (amt<=1000)?0.15*amt:0.20*amt;
    printf("Discount: %.2lf\nTotal Price: %.2lf\n",dis,amt-dis);
    return 0;
}

