#include <stdio.h>

int main()
{
    char name[100];
    printf("enter student full name including spaces\n");
    fgets(name,sizeof(name),stdin);
    printf("the name of student is: ");  
    puts(name);
   
    return 0;



}