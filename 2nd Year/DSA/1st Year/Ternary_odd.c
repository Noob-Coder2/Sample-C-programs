#include <stdio.h>
void main()
{
    int n;
    printf("Enter the Number :");
    scanf("%d",&n);
    n%4==0?n%100==0?n%400==0?printf("Leap year"):printf("Not Leap Year"):printf("Leap Year"):printf("Not Leap Year"); 
}