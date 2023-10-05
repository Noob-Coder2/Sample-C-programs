#include <stdio.h>
int main()
{
    int den = 1,sign = 1,n;
    float x,sum,num;
    printf("Enter the angle:");
    scanf("%f",&x);
    printf("Enter the value of n:");
    scanf("%d",&n);
    x= x*3.14/180;
    sum = x;
    num = x;
    for (size_t i = 1; i < n; i++)
    {
        num =num*x*x;
        den = den*(2*i)*(2*i+1);
        sign = sign*(-1);
        sum= sum + num/den*sign;
    }
    printf("%.3f",sum);
    return 0;
}
