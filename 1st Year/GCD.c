//Greatest Common Divisor
#include <stdio.h>
int main()
{
    int n1, n2, gcd=1;
    scanf("%d%d",&n1,&n2);
    for (size_t i = 1; i <= n1+n2; i++)
    {
        if (n1%i==0 && n2%i==0)
            {gcd =i;}
    }
    printf("%d",gcd);
    return 0;
}
