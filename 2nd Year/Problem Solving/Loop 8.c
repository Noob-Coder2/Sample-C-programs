#include <stdio.h>

int main()
{
    int row;
    printf("Enter number of rows : ");
    scanf("%d",&row);
    for (size_t i = 1; i <=row; i++)
    {
        for (size_t j = 0; j <row-i; j++)
        {
            printf(" ");
        }
        for (size_t j = 0; j < 2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
