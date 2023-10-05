#include <stdio.h>
int fact(int m)
{
    if (m != 1)
    {
        int f=m * fact(m - 1);
        return f;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int n, m, a, s = 0,i;
    printf("Enter The Number :");
    scanf("%d", &n);
    for (size_t i = 1; i < n; i++)
    {
        m = i;
        while (m > 0)
        {
            a = m % 10;
            m = m / 10;
            s = s + fact(a);
        }
        if (s == i)
        {
            printf("%d ",i);
        }
        s=0;
    }
    return 0;
}
