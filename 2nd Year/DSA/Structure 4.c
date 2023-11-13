/*4. Write a program to add two distances in inch-feet using structure. The values of the distances is to be taken from the user.*/

#include <stdio.h>

struct inch_feet
{
    int inch;
    int feet;
}conv[2];

int main()
{
    for (size_t i = 0; i < 2; i++)
    {
        printf("Enter the distances %d:\n",i+1);
        printf("Enter Feet :");
        scanf("%d",&conv[i].feet);
        printf("Enter Inches :");
        scanf("%d",&conv[i].inch);
    }
    int sum_i=0,sum_f=0,rem;
    for (size_t i = 0; i < 2; i++)
    {
        sum_i += conv[i].inch;
        sum_f += conv[i].feet;
    }
    if (sum_i>11)
    {
        rem = sum_i/12;
        sum_f+=rem;
        sum_i-= rem*12;
    }
    printf("Sum is %d feet and %d inches",sum_f,sum_i);

    return 0;
}

