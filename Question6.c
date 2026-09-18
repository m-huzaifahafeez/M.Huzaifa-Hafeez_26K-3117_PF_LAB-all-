#include <stdio.h>
int main()
{
    int Marks;
    printf(" enter your marks\n");
    scanf("%d",&Marks);
    if(Marks>=50){
        printf("pass");
    }else{
        printf("fail");
    }
    return 0;
    
}