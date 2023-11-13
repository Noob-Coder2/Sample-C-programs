#include <stdio.h>
int main()
{
    for (size_t i = 1; i <= 6; i++)
    {
        int a = 1;
        for (size_t j = 6; j >= i; j--)
        {
            printf("%d\t", a);
            a++;
        }
        for (size_t m = 1; m < i; m++)
        {
            printf(" \t");
        }
        for (size_t m = 1; m < i; m++)
        {
            printf(" \t");
        }
        for (size_t n = 6; n >= i; n--)
        {
            a--;
            printf("%d\t", a);
        }
        printf("\n");
    }

    return 0;
}
