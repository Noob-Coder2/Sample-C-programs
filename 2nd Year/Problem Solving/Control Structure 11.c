/*Find the no of leap years in a range of years*/

#include <stdio.h>
int main()
{
    int lower,upper,count =0,year;
    printf("Enter lower range and upper range:");
    scanf("%d%d",&lower,&upper);
    for (year = lower; year <lower+4; year++)
    {
        if (year%4==0 && year%100!=0 || year%400==0)
        {
            lower = year;
            break;
        }
    }
    for (year = lower; year <=upper; year+=4)
    {
        if (year%4==0 && year%100!=0 || year%400==0)
        {
            count++;
        }
    }
    printf("Number of leap year =  %d",count);
    return 0;
}
