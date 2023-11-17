/*a raised to power b using recursion*/

#include <stdio.h>

int power(int a,int b)
{
    int ex = 1;
    if (b==0)
    {
        return ex;
    }
    ex *=a;
    return ex*power(a,b-1);
}

int main()
{
    int a,b;
    printf("Enter Base : ");
    scanf("%d",&a);
    printf("Enter Power : ");
    scanf("%d",&b);
    printf("%d",power(a,b));
    return 0;
}
