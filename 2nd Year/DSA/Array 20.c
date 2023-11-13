/*Program for finding Matrix Determinant*/
#include <stdio.h>

float determinant(int n, float mat[n][n])
{
    if (n == 1)
    {
        return mat[0][0];
    }
    else if (n == 2)
    {
        return mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
    }
    else
    {
        int row, col;
        float submatrix[n - 1][n - 1];
        float det = 0;
        for (size_t i = 0; i < n; i++)
        {
            for (row = 1; row < n; row++)
            {
                int colx = 0;
                for (col = 0; col < n; col++)
                {
                    if (col != i)
                    {
                        submatrix[row - 1][colx] = mat[row][col];
                        colx++;
                    }
                }
            }
            float subdet = determinant(n - 1, submatrix);
            if (i % 2 == 0)
            {
                det += mat[0][i]*subdet;
            }
            else
            {
                det -= mat[0][i]*subdet;
            }
        }
        return det;
    }
}

int main()
{
    int n;
    printf("Enter size of matrix : ");
    scanf("%d", &n);
    float matrix[n][n];
    // Inputing Matrix
    printf("Enter Elements in Matrix:\n");
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            scanf("%f", &matrix[i][j]);
        }
    }
    float det = determinant(n, matrix);
    printf("Determinant is %.3f", det);
    return 0;
}

