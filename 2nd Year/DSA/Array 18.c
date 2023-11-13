/*Program for Matrix Multiplication*/

#include <stdio.h>
int main()
{
    int n,m;
    int i,j;
    printf("Enter Number of rows:");
    scanf("%d",&n);
    printf("Enter Number of columns:");
    scanf("%d",&m);
    int a[n][m],b[m][n];
    //Entering the elements in matrix a
    printf("Add data in matrix 1");
    for (i = 0; i <n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Enter Element :");
            scanf("%d",&a[i][j]);
        }
    }
    //Entering the elements in matrix b
    printf("Add data in matrix 2");
    for (i = 0; i <n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Enter Element :");
            scanf("%d",&b[i][j]);
        }
    }
    int mul[n][n];
    int c[n][n];
    for (i = 0; i < n; i++)
    {  
        for (j = 0; j < n; j++)
        {
            mul[i][j]=0;
            for (int k = 0; k < n; k++)
            {
                mul[i][j] = mul[i][j] +a[i][k]*b[k][j];
            }
          
        }
        
    }
    //Printing Matrix
    printf("\nMultiplied matrix is:\n");
    for ( i= 0; i <m; i++)
    {
        
        for (j = 0; j < n; j++)
        {
            printf("%d\t",mul[i][j]); 
        }
        printf("\n");
    }
    return 0;
}

