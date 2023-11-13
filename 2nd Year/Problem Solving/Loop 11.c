#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the rows :");
    scanf("%d",&rows);
    for (size_t i = 1; i <=rows; i++)
    {
        int n = 1;
        for (size_t j = 0; j <i; j++)
        {
            printf("%d",n);
            n++;
        }
        for (size_t j = 0; j < 2*(rows-i); j++)
        {
            printf(" ");
        }
        for (size_t j = i; j > 0; j--)
        {
            n--;
            printf("%d",n);
        }
        printf("\n");
    }
    
    return 0;
}
