#include <stdio.h>
int main()
{
    int age,fever;
    float weight;
    printf("\nEnter patient age");
    scanf("%d",&age);
    printf("\nEnter patient weight");
    scanf("%f",&weight);
    printf("\nEnter (1)yes (0)no if patient has fever");
    scanf("%d",&age);
    if (age<2)
    {
        printf("\ndosage : consult doctor");
    }
    else if(((age>=2) && (age<=12)) && (weight<20))
    {
        printf("\ndosage : 2.5ml");
    }
    else if((fever==1) && (weight<15))
    {
        printf("\ndosage : consult doctor");
    }
    else if(((age>=2) && (age<=12)) && (weight>=20))
    {
        printf("\ndosage : 5.0ml");
    }
    else if((age>12)&&((fever==1) ||(weight>70)))
    {
        printf("\ndosage : 10.0ml");
    }
    else if(age>12)
    {
        printf("\ndosage : 7.5ml");
    }
    return 0;
}