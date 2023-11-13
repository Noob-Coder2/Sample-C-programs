//Greatest Common Divisor
#include <stdio.h>
/*int main()
{
    int n1, n2, gcd=1;
    scanf("%d%d",&n1,&n2);
    for (size_t i = 2; i <= n1+n2; i++)
    {
        if (n1%i==0 && n2%i==0)
            {gcd =i;}
    }
    printf("%d",gcd);
    return 0;
}
*/

int gcd(int a, int b)
{
    if (a == 0) {
    return b;
    }
    else if (b == 0) {
    return a;
    }
    else {
        if (a>b) {
            return gcd(a%b,b);
        }
        else {
            return gcd(a,b%a);
        }
    }
}

int main()
{
    int n = gcd(4,6);
    printf("%d",n);
    return 0;
}


