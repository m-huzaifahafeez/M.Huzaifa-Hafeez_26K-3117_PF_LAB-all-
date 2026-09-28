#include <stdio.h>
int main()
{
    int Temp;
    printf("enter temperature");
    scanf("%d",&Temp);
    if(Temp<15)
    {
        printf("Cold");
    }
    else if(Temp>=15 && Temp<30)
    {
        printf("Normal");
    }
    else if(Temp>=30)
    {
        printf("Hot");
    }
    else
    {
        printf("input temp in celcius pls");
    }
    return 0;
}