#include <stdio.h>
int main()
{
    int n, s = 0;
    printf("Enter the number :");
    scanf("%d", &n);
    for (size_t i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            s = s + i;
        }
    }
    if (s == n)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not perfect Number");
    }

    return 0;
}
