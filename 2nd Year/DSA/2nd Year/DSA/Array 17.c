#include <stdio.h>
int main()
{
    /*int a[3][3]={{14,95,16},
                {26,32,51},
                {62,65,56}};
    int b[3][3]={{1,5,6},
                {6,3,5},
                {2,6,6}};*/

    int n,m;
    printf("Enter Number of rows:");
    scanf("%d",&n);
    printf("Enter Number of columns:");
    scanf("%d",&m);
    int a[n][m],b[m][n];
    //Entering the elements in matrix a
    printf("Add data in matrix 1");
    for (size_t i = 0; i <n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            printf("Enter Element :");
            scanf("%d",&a[i][j]);
        }
    }
    //Entering the elements in matrix b
    printf("Add data in matrix 2");
    for (size_t i = 0; i <n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            printf("Enter Element :");
            scanf("%d",&b[i][j]);
        }
    }
    int c[m][n];
    //Substracting two matrix
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
        
    }
    //Printing Matrix
    printf("\nSubstracted matrix is:\n");
    for (size_t i = 0; i <m; i++)
    {
        printf("\n");
        for (size_t j = 0; j < n; j++)
        {
            printf("%d\t",c[i][j]); 
        }
    }

    return 0;
}
