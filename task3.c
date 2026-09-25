#include <stdio.h>
int main()
{
    int marks,UnaprAbsnt;
    float percAtnnd;
    printf("\nEnter internal marks");
    scanf("%d",&marks);
    printf("\nEnter unapproved absences");
    scanf("%d",&UnaprAbsnt);
    printf("\nEnter attendance percentage");
    scanf("%f",&percAtnnd);

    if (marks>=20)
    {
        if(UnaprAbsnt<=2)
        {
            if (percAtnnd>=75 && marks>= 30)
            {
                printf("Eligible");
            }
            else if(((percAtnnd>=65) && (percAtnnd<=74)) && (marks>= 40))
            {

                printf("Eligible(grace attendance)");
            }
            else
            {
                    printf("NOT Eligible");
            }
        }
        else
        {
            printf("Debarred");
        }
    }
    else
    {
        printf("Debarred");
    }
    return 0;
}