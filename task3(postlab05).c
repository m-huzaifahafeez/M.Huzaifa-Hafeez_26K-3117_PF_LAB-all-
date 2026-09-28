#include <stdio.h>
int main()
{
    int appointment,doctorAvailable,registrationCompleted;
    printf("\nenter (1) yes (0) no if have an appointment");
    scanf("%d",&appointment);
    printf("\nenter (1) yes (0) no if doctor is available");
    scanf("%d",&doctorAvailable);
    printf("\nenter (1) yes (0) no if registration complted");
    scanf("%d",&registrationCompleted);
    if(appointment==1)
    {
        if(doctorAvailable==1)
        {
            if(registrationCompleted==1)
            {
                printf("\npatient can meet the doctor!");
            }
            else
            {
                printf("\npatient canot meet doctor!");
            }
        }
        else
        {
            printf("\ndoctor not avaialable!");
        }
    }
    else
    {
        printf("\npatient doesnt have appointment!");
    }
    return 0;
}