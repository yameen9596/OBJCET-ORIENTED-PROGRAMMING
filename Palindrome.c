#include <stdio.h>
int main(){
    int i,n,temp,rev=0,rem;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        rem=temp%10;
        rev=rev*10+rem;
        temp/=10;
    }
    if(rev==n) printf("Palindrome\n");
    else printf("Not Palindrome\n");

    int start,end;
    printf("Enter range (start end): ");
    scanf("%d %d",&start,&end);
    for( i=start;i<=end;i++){
        temp=i; rev=0;
        while(temp){ rev=rev*10+temp%10; temp/=10; }
        if(rev==i) printf("%d ",i);
    }
    return 0;
}

