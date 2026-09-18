#include <stdio.h>
int main()
{
    int Dayslate;

    printf("enter the number of days late");
    scanf("%d",&Dayslate);
    if(Dayslate==0){
        printf("no fine");
    }else if((Dayslate>=1) && (Dayslate<=5)){
        printf(" pay fine of 50.Rs");
    }else if((Dayslate>=6) && (Dayslate<=10)){
        printf(" pay fine of 100.Rs");
    }else if(Dayslate>10){
        printf(" pay fine of 200.Rs");
    }
    return 0;

}
