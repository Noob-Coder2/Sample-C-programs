/*x- x3/3! + x5/5! - x7/7!........ */

#include <stdio.h>

int main()
{
    int n,k=1,x,y,sign=-1;
    printf("Enter Number of terms :");
    scanf("%d",&n);
    printf("Enter the value of x :");
    scanf("%d",&x);
    x *= 3.14/180;
    float sum=x;
    if (n==0)
    {
        printf("%d",0);
    }
    y=x*x;
    for (size_t i = 3; i <n; i+2)
    {
        k*=(i-1)*i;
        x*=y;
        sum += sign*(float)x/k;
        sign*=-1;
    }
    printf("%.3f",sum);
    return 0;
}

