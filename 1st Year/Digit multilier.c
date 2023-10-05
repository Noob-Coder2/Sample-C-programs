#include <stdio.h>
int main()
{
    int n,a,m=1;
    printf("Enter the number:");
    scanf("%d",&n);
    while (n>0)
    {
        a=n%10;
        m=m*a;
        n=n/10;
    }
    printf("%d",m);
    return 0;
}
