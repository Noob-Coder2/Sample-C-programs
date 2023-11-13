/*Program for Matrix Transpose*/

#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter Number of rows:");
    scanf("%d",&n);
    printf("Enter Number of columns:");
    scanf("%d",&m);
    int a[n][m],at[m][n];
    //Entering the elements in matrix
    for (size_t i = 0; i <n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            printf("Enter Element :");
            scanf("%d",&a[i][j]);
        }
    }
    //Transposing The Matrix
    for (size_t i=0; i <m; i++)
    {
        for (size_t k=0; k<n; k++)
        {
            at[i][k] = a[k][i];
        }
    }
    //Printing Matrix
    printf("\nTranspose of matrix is:\n");
    for (size_t i = 0; i <m; i++)
    {
        printf("\n");
        for (size_t j = 0; j < n; j++)
        {
            printf("%d\t",at[i][j]); 
        }
    }
    //Checking for symetric matrix
    if (n==m)
    {
        for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            if (a[i][j]!=a[j][i])
            {
                printf("\nAsymmetric matrix");
                break;
            }
            else
            {
                printf("\nSymmetric matrix");
            }
        }
        
    }
    }
    else
    {
        printf("\nAsymmetric matrix");
    }
    
    return 0;
}

