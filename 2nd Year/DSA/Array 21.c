/*Program for Matrix transposition without second matrix*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter Size of Matrix:");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter elements in array :\n");
    for (size_t i = 0; i <n; i++)
    {
        for (size_t j = 0; j <n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    //Transposing the Matrix
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = i+1; j < n; j++)
        {
            int temp = a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    
    //Print the transpose matrix
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

