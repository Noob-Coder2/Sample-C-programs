/*Finding sum of the digits of the number*/

#include <stdio.h>

int add_digit(int n, int sum)
{
    if (n==0)
    {
        return sum;
    }
    add_digit(n/10,sum + n%10);
}

int main()
{
    int n, sum = 0;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("%d",add_digit(n,sum));
    return 0;
}
