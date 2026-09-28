#include <stdio.h>
int main()
{
    int operation1,operation2;
    printf("\nenter desired opration\n(1)Balance Enquiry\n(2)Cash Withdrawal\n(3)Cash Deposit");
    scanf("%d",&operation1);
    switch(operation1)
    {
        case 1:
            printf("\nenter account type (1)Current (2)Savings");
            scanf("%d",&operation2);
            switch(operation2)
            {
                case 1:
                    printf("current account balance check");
                    break;
                case 2:
                    printf("savings account balance check");
                    break;
            }
            break;
       case 2:
            printf("\nenter account type for withdrawal (1)Current (2)Savings");
            scanf("%d",&operation2);
            switch(operation2)
            {
                case 1:
                    printf("current account withdrawal");
                    break;
                case 2:
                    printf("savings account withdrawal");
                    break;
            }
        case 3:
            printf("\nenter account type fro deposit (1)Current (2)Savings");
            scanf("%d",&operation2);
            switch(operation2)
            {
                case 1:
                    printf("current account deposit");
                    break;
                case 2:
                    printf("savings account deposit");
                    break;
            }
        }
}