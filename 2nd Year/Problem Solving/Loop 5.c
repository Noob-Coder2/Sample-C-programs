#include <stdio.h>

int main()
{
    int row;
    printf("Enter number of rows : ");
    scanf("%d",&row);
    int n=row+64;
    for (size_t i = 1; i <=row; i++)
    {
        for (size_t j = 0; j < i; j++)
        {
            printf("%c ",n);
            n++;
        }
        printf("\n");
        n=row+64-i;
    }
    return 0;
}
