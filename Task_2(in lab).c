#include <stdio.h>
int main()
{
    int ID,Test;
    printf("\ndo you have a CNIC 1(yes) 0(no) ");
    scanf(" %d",&ID);
    printf("\ndid you pass the test 1(yes) 0(no) ");
    scanf(" %d",&Test);
    if(ID==1)
    {
        if(Test==1)
        {
            printf("\nLicense can be issued ");
        }
        else
        {
            printf("\ndid not pass test");
        }
    }
    else
    {
        printf("\nno CNIC document ");
    }

}