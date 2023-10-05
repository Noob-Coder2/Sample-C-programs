/*Program for finding GCD of two numbers using Recursion*/

#include<stdio.h>

int gcd(int a, int b)
{
    if (a%b==0)
    {
        return b;
    }
    gcd(b,a%b);
}

int main()
{
    int a,b;
    printf("Enter the value of a and b : ");
    scanf("%d%d",&a,&b);
    printf("%d",gcd(a,b));
    return 0;
}
