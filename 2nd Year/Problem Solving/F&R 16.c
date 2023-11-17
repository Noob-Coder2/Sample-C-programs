/*To find the a raised to power N using Binary exponentiation*/
#include <stdio.h>

int ex(int a,int n)
{
    if (n==0)
    {
        return 1;
    }
    if (n%2==0)
    {
        return ex(a,n/2)*ex(a,n/2);
    }
    else
    {
        return ex(a,n/2)*ex(a,n/2)*a;
    }
}

int main()
{
    int a,n;
    printf("Enter Base : ");
    scanf("%d",&a);
    printf("Enter Power : ");
    scanf("%d",&n);
    printf("%d",ex(a,n));
    return 0;
}
