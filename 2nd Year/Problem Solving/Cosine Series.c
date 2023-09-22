#include <stdio.h>
int main()
{
    int den = 2,sign = -1,n;
    float x,sum = 0,num;
    printf("Enter the angle:");
    scanf("%f",&x);
    printf("Enter the value of n:");
    scanf("%d",&n);
    x= x*22/7/180;
    num=x*x;
    for (size_t i = 1; i < n; i++)
    {
        sum= sum + num/den*sign;
        num =num*x*x;
        den = den*(2*i+1)*(2*i+2);
        sign = sign*(-1);
    }
    printf("%.3f",sum);
    return 0;
}
