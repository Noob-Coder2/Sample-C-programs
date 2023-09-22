#include <stdio.h>
int main()
{
    int n,i=1,c=-1;
    printf("Enter number of coins:");
    scanf("%d",&n);
    while (n>=0)
    {
        n=n-i;
        i++;
        c++;
    }
    printf("%d",c);
    return 0;
}
