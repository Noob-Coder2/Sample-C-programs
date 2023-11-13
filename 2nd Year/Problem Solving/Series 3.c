/*1+ x + x2/2! + x3/3! + x4/4!......*/

#include <stdio.h>

int main()
{
    int n,k=1,x,y;
    float sum=1,m;
    printf("Enter Number of terms :");
    scanf("%d",&n);
    printf("Enter the value of x :");
    scanf("%d",&x);
    y=x;
    if (n==0)
    {
        printf("%f",&sum -1);
    }
    for (size_t i = 1; i <n; i++)
    {
        k*=i;
        sum += (float)x/k;
        x*=y;
    }
    printf("%.3f",sum);
    return 0;
}

