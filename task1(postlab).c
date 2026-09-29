#include <stdio.h>
int main()
{
    int t;
    float fare,d;
    printf("\nenter distance in km");
    scanf("%f",&d);
    printf("\nenter what hour it is 0-23");
    scanf("%d",&t);
    if(d<=0)
    {
        printf("\ninvalid distance input");
    }
    else
    {
        if(t<6 || t>22)
        {
            fare=50.00+40.00+((d-1)*22.00);
        }
        else 
        {
            fare=50.00+((d-1)*22.00);
        }
        printf("\n your fare is %.2f Rs.",fare);
    }

}