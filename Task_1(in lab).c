#include <stdio.h>
int main()
{
    int marks,age;
    printf("enter your age");
    scanf(" %d",&age);
    printf("\nenter marks");
    scanf(" %d",&marks);
    if(age>=18)
    {
        if(marks>=50)
        {
            printf("\nEligible for admission");
        }
        else
        {
            printf("\nnot enough marks");
        }
    }
    else
    {
        printf("\n did not meet age requirement");
    }
    return 0;

}