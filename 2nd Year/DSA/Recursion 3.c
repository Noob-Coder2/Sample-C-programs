/*Program for finding nth Fibonacci number using Recursion and improving its run time to save stack operations*/

#include <stdio.h>
//Method 1
/*
void fibo(int n, int a, int b)
{
    if (n==0)
    {
        return;
    }
    printf("%d\t",a+b);
    fibo(n-1,b,a+b);
}
void main()
{
    int a=0,b=1,n,f=0;
    printf("Enter the number of terms :");
    scanf("%d",&n);
    if (n>=1)
    {
        printf("%d\t",a);
    }
    if (n>=2)
    {
        printf("%d\t",b);
    }
    fibo(n-2,a,b);
}
*/

//Method 2
/*
void fibo(int n, int a, int b)
{
    if (n==0)
    {
        printf("%d\t",a);
        return;
    }
    fibo(n-1,b,a+b);
}
void main()
{
    int n,a=0,b=1;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    for (size_t i = 0; i < n; i++)
    {
        fibo(i,a,b);
    }
}*/


//Method 3

int fibo(int n)
{
    if (n==1||n==2)
    {
        return n-1;
    }
    else
    {
        return fibo(n-1) + fibo(n-2);
    }
}

void  main()
{
    int i,n;
    printf("Enter the range :");
    scanf("%d",&n);
    for (i = 0; i <=n; i++)
    {
        printf("%d\t",fibo(i));
    }   
}


