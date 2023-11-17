/*Strong numbers less than or equal to N*/

#include <stdio.h>

int fact(int n,int f)
{
    if (n==0 || n==1)
    {
        return f;
    }
    f = f*n;
    fact(n-1,f);
}

void strong(int n)
{
    int sum =0;
    int m=n , i;
    while (n!=0)
    {
        i = n%10;
        sum = sum + fact(i,1);
        n /=10;
    }
    if (sum == m)
    {
        printf("%d\n",m);
    }
    
}

int main()
{
    int n;
    printf("Enter Number :");
    scanf("%d",&n);
    for (size_t i = 1; i <= n; i++)
    {
        strong(i);
    }
    return 0;
}


