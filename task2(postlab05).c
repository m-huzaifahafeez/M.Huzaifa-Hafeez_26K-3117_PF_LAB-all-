#include <stdio.h>
int main()
{
    int balance;
    printf("enter balance");
    scanf("%d",&balance);
    if (balance<500)
    {
        printf("low balance");
    }
    else if(balance>=500 && balance<=2000)
    {
        printf("sufficient balance");
    }
    else if(balance>2000)
    {
        printf("premium balance");
    }
    else{            printf("enter correct balance integer");
    }
}
