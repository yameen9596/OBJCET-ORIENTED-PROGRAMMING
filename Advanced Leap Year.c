#include <stdio.h>
int main(){
    int y,i,count=0;
    printf("Enter a year: ");
    scanf("%d",&y);
    if((y%4==0 && y%100!=0) || (y%400==0))
        printf("%d is a leap year\n",y);
    else {
        printf("%d is not a leap year\nNext 5 leap years: ",y);
        i = y+1;
        while(count<5){
            if((i%4==0 && i%100!=0) || (i%400==0)){
                printf("%d ",i);
                count++;
            }
            i++;
        }
    }
    return 0;
}

