#include <stdio.h>
int main(){
    int choice;
    double bal=0, amt;
    do{
        printf("\n1.Deposit\n2.Withdraw\n3.Balance Inquiry\n4.Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: printf("Enter amount: "); scanf("%lf",&amt);
                    bal+=amt; break;
            case 2: printf("Enter amount: "); scanf("%lf",&amt);
                    if(amt>bal) printf("Insufficient balance\n");
                    else bal-=amt; break;
            case 3: printf("Balance: %.2lf\n",bal); break;
            case 4: printf("Exiting\n"); break;
            default: printf("Invalid choice\n");
        }
    }while(choice!=4);
    return 0;
}

