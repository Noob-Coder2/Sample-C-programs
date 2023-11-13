#include <stdio.h>
#include <math.h>
int main()
{
    int n,a,b,m,size;
    printf("Enter a NuMBER :");
    scanf("%d",&n);
    b=0;
    m=n;
    size = log10(n)+1;
    for (size_t i = 0; i < size; i++)
    {
        a = n%10;
        b = b+a*pow(10,size-1-i);
        n = (n-a)/10;
    }
    if(m==b)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}