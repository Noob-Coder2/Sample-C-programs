/*Program to perform Primality testing using Seive of Erosthenus concept*/

#include <stdio.h>

void prime(int n)
{
    int i = 2, m = n;
    while (n > 2 && n % 2 == 0)
    {
        n /= 2;
    }
    for (size_t i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            n /= i;
        }
    }
    if (m == n)
    {
        printf("%d is Prime Number", m);
    }
    else
    {
        printf("%d is not Prime Number", m);
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
