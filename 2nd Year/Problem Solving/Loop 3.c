#include <stdio.h>

int main()
{
    int row;
    char n ='A';
    printf("Enter number of rows : ");
    scanf("%d",&row);
    for (size_t i = 1; i <=row; i++)
    {
        for (size_t j = 0; j < i; j++)
        {
            printf("%c ",n);
        }
        printf("\n");
        n++;
    }
    
    return 0;
}
