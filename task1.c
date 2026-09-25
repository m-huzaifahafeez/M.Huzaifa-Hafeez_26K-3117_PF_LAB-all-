#include <stdio.h>
int main()
{
    int prevValue,curValue,Units;
    float tax,bill;
    printf("\nEnter previous units");
    scanf("%d",&prevValue);
    printf("\nEnter current units");
    scanf("%d",&curValue);
    if(curValue<prevValue)
    {
        Units=(curValue+10000)-prevValue;
    }
    else
    {
        Units=curValue+prevValue;
    }
    if(Units<0)
    {
        printf("invalid reading detected");
    }
    else
    {
        if(Units<=100)
        {
            bill=0;
        }
        else if(Units>100 && Units<=200)
        {
            bill=(Units-100)*2;
        }
        else if(Units>200 && Units<=400)
        {
            bill=(100*2)+(200*3.50);
        }
        else if(Units>400)
        {
            bill=(100*2)+(200*3.50)+((Units-400)*5.0);
        }
        if(Units>500);
        {
            tax=bill*0.15;
            bill=bill+tax;
            printf("\nNumber of units consumed : %d\nTotal bill is %f",Units,bill);
        }
    }

    return 0;

}