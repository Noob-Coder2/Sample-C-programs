/*Program to find all Prime factors of a given no*/

#include <stdio.h>

void prime(int n)
{
    int i = 2;
    while (n % 2 == 0)
    {
        printf("%d ", 2);
        n /= 2;
    }
    for (size_t i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            printf("%d ", i);
            n /= i;
        }
    }
    if (n > 1)
    {
        printf("%d ", n);
    }
}

int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    prime(n);
    return 0;
}
