/*5. Write a program to add two complex numbers using structure. The values of the complex number is to be taken from the user.*/

#include <stdio.h>

struct complex
{
    int real;
    int image;
}addc[2];

int main()
{
    for (size_t i = 0; i < 2; i++)
    {
        printf("Enter the complex number %d:\n",i+1);
        printf("Enter Real part :");
        scanf("%d",&addc[i].real);
        printf("Enter Imaginary part :");
        scanf("%d",&addc[i].image);
    }
    int sum_i=0,sum_r=0,rem;
    for (size_t i = 0; i < 2; i++)
    {
        sum_i += addc[i].image;
        sum_r += addc[i].real;
    }
    printf("Sum of Complex Number is : %d+%di",sum_r,sum_i);
    return 0;
}
