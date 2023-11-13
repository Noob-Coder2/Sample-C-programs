/*Find the sum of first n terms of the following series: 1! + 2! + 3! + 4!...................*/

#include <stdio.h>

int main()
{
    int n,sum=0,k=1;
    printf("Enter Number of terms :");
    scanf("%d",&n);
    for (size_t i = 1; i <=n; i++)
    {
        k*=i;
        sum += k;
    }
    printf("%d",sum);
    return 0;
}
