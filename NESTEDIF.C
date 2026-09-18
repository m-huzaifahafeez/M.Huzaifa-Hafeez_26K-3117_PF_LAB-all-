#include <stdio.h>
int main ()
{
    int x,y,z;
    printf("enter number 1");
    scanf("%d",&x);
    printf("enter number 2 ");
    scanf("%d",&y);
    printf("enter a number 3");
    scanf("%d",&z);

    if (x>y){
        if (x>z){
            printf(" %d is the largest",x);
        }else{
            printf(" %d is the largest",z);
        }
    }else{
        if (y>z){
            printf(" %d is the largest",y);
        }else{
            printf(" %d is the largest",z);
            
        }
        
    }
    return 0;

}