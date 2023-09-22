#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c;
    float D;
    printf("Enter the values of a,b,c:");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    D = b*b -4*a*c;
    printf("%f\n",D);
    if (D ==0)
    {
        printf("Roots are real and equal.");
    }
    else if (D<0)
    {
        printf("Roots are Imaginary.");
    }
    else
    {
        printf("Roots are real and unequal.");
    }
    return 0;
}