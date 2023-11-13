/*6. Write a program to add two time in hour, minute and second using structure. The values of the time is to be taken from the user.*/

#include <stdio.h>

struct time
{
    int hour;
    int minute;
    int second;
}time[2];

int main()
{
    //Inputing Time
    for (size_t i = 0; i < 2; i++)
    {
        printf("Enter the time %d:\n",i+1);
        printf("Enter Hour :");
        scanf("%d",&time[i].hour);
        printf("Enter Minutes :");
        scanf("%d",&time[i].minute);
        printf("Enter Seconds :");
        scanf("%d",&time[i].second);
    }
    int sum_h=0,sum_m=0,rem,sum_s=0;

    //Adding Time
    for (size_t i = 0; i < 2; i++)
    {
        sum_m += time[i].minute;
        sum_h += time[i].hour;
        sum_s += time[i].second;
    }
    if (sum_s>=60)
    {
        rem = sum_s/60;
        sum_m+=rem;
        sum_s-=rem*60;
        
    }
    if (sum_m>=60)
    {
        rem = sum_m/60;
        sum_h+=rem;
        sum_m-= rem*60;
    }
    printf("Sum is %d hour %d minutes %d seconds",sum_h,sum_m,sum_s);
    return 0;
}