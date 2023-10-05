#include <stdio.h>

int main()
{
    int row,n=1;
    printf("Enter number of rows : ");
    scanf("%d",&row);
    for (size_t i = 1; i <=row; i++)
    {
        for (size_t j = 0; j <2*i-1; j++)
        {
            if (j<row-n)
            {
                printf(" ");
            }
            else
            {
                printf("%d ",n);
                n++;
            }
        }
        printf("\n");
        n=i+1;
    }
    
    return 0;
}
