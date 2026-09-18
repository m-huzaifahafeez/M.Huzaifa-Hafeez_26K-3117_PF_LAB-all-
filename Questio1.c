#include <stdio.h>
int main()
{
    int totmarks=100 ;
    int marks;
    double percentage,income;
    printf("enter obtained marks\n");
    scanf("%d",&marks);
    printf(" enter your family income\n");
    scanf("%lf",&income);
    percentage=(marks/totmarks)*100;
    if((percentage>=80)||(income<50000.00))
    {
        printf("you are eligible for a scholarship");
    }else
    {
        printf("sorry you are not eligible for scholarship");

    }
    return 0;
    

}