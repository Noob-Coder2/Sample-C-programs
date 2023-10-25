#include <stdio.h>

int main()
{
    int row,n=1;
    printf("Enter number of rows : ");
    scanf("%d",&row);
    for (size_t i = 1; i <=row; i++)
    {
        for (size_t j = 0; j <row-i; j++)
        {
            printf(" ");
        }
        for (size_t j = 0; j < i; j++)
        {
            printf("%d",n);
            n++;
        }
        n--;
        for (size_t j = 1; j <i; j++)
        {   
            n--;
            printf("%d",n); 
        }
        
        printf("\n");
        n=i+1;
    }
    return 0;
}
