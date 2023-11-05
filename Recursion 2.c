/*Program for Computing A raised to power n using Recursion*/

#include <stdio.h>
int power(int A, int n, int p)
{
    if (n==1)
    {
        return p;
    }
    p=p*A;
    power(A,n-1,p);
}

int main()
{
    int A,n;
    printf("Enter the value of A and n :");
    scanf("%d%d",&A,&n);
    int p= power(A,n,A);
    printf("Result is %d",p);
    return 0;
}
