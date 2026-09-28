#include <stdio.h>
int main()
{
    int restauranOpen,itemAvailable,balanceSufficient;
    printf("\nenter (1) yes (0) no if restaurant is open");
    scanf("%d",&restauranOpen);
    printf("\nenter (1) yes (0) no if item is avaialble");
    scanf("%d",&itemAvailable);
    printf("\nenter (1) yes (0) no if balance is sufficient");
    scanf("%d",&balanceSufficient);
    if(restauranOpen==1)
    {
        if(itemAvailable==1)
        {
            if(balanceSufficient==1)
            {
                printf("\norder accepted");
            }
            else
            {
                printf("\norder rejected!");
            }
        }
        else
        {
            printf("\norder rejected!");
        }
    }
    else
    {
        printf("\norder rejected!");
    }
    return 0;
}
