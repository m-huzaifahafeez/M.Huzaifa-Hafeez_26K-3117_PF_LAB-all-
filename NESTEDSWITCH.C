#include <stdio.h>
int main()
{
    char starting,ending;
    printf("enter starting character");
    scanf("%c",&starting);
    switch(starting)
    {
        case 'A':
        case 'a':
            printf("enter ending character");
            scanf(" %c",&ending);
            switch(ending)
            {
                case 'a':
                case 'A':
                    printf("\n Alaska  Albania Algeria\n");
                    break;
                default:
                    printf("\n no such country ");   
                    
            }break;
        case 'b':
        case 'B':
            printf("enter ending character");
            scanf(" %c",&ending);
            switch(ending)
            {
                case 'a':
                case 'A':
                    printf("\n Bulgaria Bolvia Botswana");
                    break;
                default:
                    printf("no such country");
                
            }break;
        break;    
        default:
            printf("enter a or b as characters");
            

    }
    

    

}