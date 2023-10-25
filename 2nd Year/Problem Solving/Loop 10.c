#include <stdio.h>

int main()
{
    int row,i,j,r;
    printf("Enter number of rows : ");
    scanf("%d",&row);
    if (row%2==0)
    {
        r = row/2;
    }
    else
    {
        r = row/2+1;
    }
    for (i = row-r; i >=1; i--)
    {
        for (j = row-i; j >1; j--)
        {
            printf(" ");
        }
        for (j = 2*i+1; j >0 ; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i <=r; i++)
    {
        for (j = 0; j <row-i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
