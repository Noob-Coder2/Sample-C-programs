/*Program for finding factorial of a given number using recursion*/
#include <stdio.h>

int factorial(int n, int fact)
{
    if (n==1||n==0)
    {
        return fact;
    }
    fact=fact*n;
    factorial(n-1,fact);
    
}
int main()
{
    int n, fact=1;
    printf("Enter the number:");
    scanf("%d",&n);
    int f =factorial(n,fact);
    printf("%d",f);
    return 0;
}
