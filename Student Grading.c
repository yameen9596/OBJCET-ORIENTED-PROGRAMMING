#include <stdio.h>
int main() {
    int marks[5], i, fail=0, total=0;
    float percent;
    for(i=0;i<5;i++){
        printf("Enter marks of subject %d: ",i+1);
        scanf("%d",&marks[i]);
        total+=marks[i];
        if(marks[i]<40) 
		{
			fail++;
		}
    }
    percent = total/5.0;

    if(fail>=1)
        printf("Repeat Year\n");
    else {
        if(percent>=90) printf("Grade A\n");
        else if(percent>=75) printf("Grade B\n");
        else if(percent>=60) printf("Grade C\n");
        else if(percent>=40) printf("Grade D\n");
        else printf("Grade F\n");
    }
    return 0;
}

