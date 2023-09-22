#include <stdio.h>
int fact(int m)
{
    if (m != 1)
    {
        return m*fact(m-1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int n,m,a,s=0;
    printf("Enter the number:");
    scanf("%d",&n);
    m=n;
    while (m>0)
    {
        a=m%10;
        m=m/10;
        s=s+fact(a);
    }
    if (s==n)
    {
        printf("Strong Number");
    }
    else
    {
        printf("Not Strong Nubmber");
    }
    return 0;
}
