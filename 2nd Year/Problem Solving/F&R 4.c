/*Write a program to print all perfect numbers in given range using the function.*/

#include <stdio.h>

void perfect(int n)
{
    int s =0;
    for (size_t i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            s = s + i;
        }
    }
    if (s == n)
    {
        printf("%d\n",s);
    }
}

int main()
{
    int n1,n2;
    printf("Enter Lower Limit : ");
    scanf("%d",&n1);
    printf("Enter Upper Limit : ");
    scanf("%d",&n2);
    for (size_t i = n1; i <= n2; i++)
    {
        perfect(i);
    }
    return 0;
}
