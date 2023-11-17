/*Armstrong number in the range*/

#include <stdio.h>
#include <math.h>

void arm(int n)
{
    int temp = n,arm=0,a;
    int size = log10(n)+1;
    while (temp > 0)
        {
            a = temp % 10;
            temp = temp/10;
            arm = arm + pow(a, size);
        }
        if (arm == n)
        {
            printf("%d\t",n);
        }
}

int main()
{
    int lr,ur,i;
    printf("Enter Lower Limit : ");
    scanf("%d",&lr);
    printf("Enter Upper Limit : ");
    scanf("%d",&ur);
    for (i = lr; i <=ur; i++)
    {
        arm(i);
    }
    return 0;
}
