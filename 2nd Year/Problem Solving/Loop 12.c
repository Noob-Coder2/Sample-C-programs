#include <stdio.h>

int main()
{
    for (size_t i = 6; i >0; i--)
    {
        int n = 1;
        for (size_t j = 0; j <i; j++)
        {
            printf("%d",n);
            if (n==6)
            {
                continue;
            }
            
            n++;
        }
        for (size_t j = 1; j < 2*(6-i); j++)
        {
            printf(" ");
        }

        for (size_t j = i; j > 0; j--)
        {
            n--;
            if (n==0)
            {
                continue;
            }
            printf("%d",n);
        }
        printf("\n");
    }
    return 0;
}

