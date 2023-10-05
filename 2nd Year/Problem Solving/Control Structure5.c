/*Find weekday of given date*/
#include <stdio.h>
int main()
{
    int d,m,y;
    int day =d,month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    printf("Enter the date in format DD-MM-YYYY : ");
    scanf("%d-%d-%d",&d,&m,&y);
    int ly= (y)/4-(y)/100+(y)/400;
    for (size_t i = 1; i <= m; i++)
    {
        day += month[i];
    }
    day = (y*365)+ly;
    if (y%4==0 && y%100!=0 || y%400==0)
    {
        day++;
        if (m>1)
        {
            day++;
        }
    }
    
    int n = day%7;

    switch (n)
    {
    case 0:
        printf("Sunday");
        break;
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tueday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    }
    return 0;
}
