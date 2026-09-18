#include <stdio.h>
int main()
{
    int perimeter,area,length,width;
    printf("enter lentgh");
    scanf("%d",&length);
    printf("\nenter width");
    scanf("%d",&width);
    area=length*width;
    perimeter=((2*length)+(2*width));
    printf( "the area of the rectangle is %d and the perimeter is %d",area,perimeter);
    return 0;
    
}