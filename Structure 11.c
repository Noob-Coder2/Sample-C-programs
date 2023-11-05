/*11. Write a program to compare two dates entered by user. Make a structure named Date to store the elements day, month and
year to store the dates. If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".*/
#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
} d[2];

int main()
{
    for (size_t i = 0; i < 2; i++)
    {
        printf("Enter the Date %d\n", i + 1);
        printf("Enter Day : ");
        scanf("%d", &d[i].day);
        printf("Enter Month : ");
        scanf("%d", &d[i].month);
        printf("Enter Year :");
        scanf("%d", &d[i].year);
    }
    if (d[0].day == d[0].day && d[0].month == d[1].month && d[0].year == d[1].year)
    {
        printf("Dates are equal");
    }
    else
    {
        printf("Dates are not equal");
    }
    return 0;
}
