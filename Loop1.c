#include<stdio.h>
int main()
{
  int r,i,j,k;
  printf("Enter the number of rows:");
  scanf("%d", &r);
  for(i=1;i<=r;i++){
  	for(k=1;k<=r-i;k++)
	  { printf(" ");}
	  for(j=1;j<=i;j++){
  		printf("%d ",j);
	  }
	  printf("\n");
	  
  }
	
}
