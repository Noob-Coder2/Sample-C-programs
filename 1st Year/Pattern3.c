#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter Number of rows:");
    scanf("%d", &n);
    m = n;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (j >= m - 1)
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }
        }
        m--;
        printf("\n");
    }

    return 0;
}
