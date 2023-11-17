/*To find the a raised to power N Mod M (Modular Exponentiation)*/

#include <stdio.h>
#define m 13

int ex(int a,int n)
{
    if (n==0)
    {
        return 1;
    }
    long p = ex(a,n/2);
    if (n%2==0)
    {
        return (p*p)%m;
    }
    else
    {
        return (((p*p)%m)*a)%m;
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
