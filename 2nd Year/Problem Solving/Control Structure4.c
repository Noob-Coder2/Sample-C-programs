/*check whether the year entered by the user is a leap year or not.*/

#include <stdio.h>
int main()
{
    int year;
    printf("Enter the Year:");
    scanf("%d",&year);
    /*year%4==0?year%100==0?year%400==0?printf("Leap year"):printf("Not Leap Year"):printf("Leap Year"):printf("Not Leap Year"); */
    printf("%d\n",year%4);
    printf("%d\n",year%100);
    printf("%d\n",year%400);
    
    if (year%4==0 && year%100!=0 || year%400==0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not Leap Year");
    }
    return 0;
}
