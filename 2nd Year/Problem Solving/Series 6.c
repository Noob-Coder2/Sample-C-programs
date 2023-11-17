/*1- x2/2! + x4/4! - x6/6!........*/

#include <stdio.h>

int main()
{
    int n,i,sign = -1,den =1;
    float x;
    printf("Enter number of terms : ");
    scanf("%d",&n);
    printf("Enter the angle :");
    scanf("%f",&x);
    x = x * 3.14/180;
    float sum = 1,num = 1;
    if (n==0)
    {
        printf("%d",0);
        return 0;
    }
    if (x == 0)
    {
        printf("%d",sum);
        return 0;
    }
    for (i = 1; i<n; i++)
    {
        num = num*x*x;
        den = den*(2*i-1)*(2*i);
        sum = sum + sign*(num/den);
        sign *= -1;
    }
    printf("%.3f",sum);
    return 0;
}
