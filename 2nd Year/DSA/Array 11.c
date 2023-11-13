/*Program for Set Difference*/
#include <stdio.h>

int main()
{
    int n, m, i, j,temp;
    printf("Enter size of array 1 :");
    scanf("%d", &n);
    printf("Enter size of array 2 :");
    scanf("%d", &m);
    int a[n], b[m];
    // Input Array 1
    printf("Enter Elements in array 1:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the element :");
        scanf("%d", &a[i]);
    }
    // Input Array 2
    printf("Enter Elements in array 2:\n");
    for (i = 0; i < m; i++)
    {
        printf("Enter the element :");
        scanf("%d", &b[i]);
    }
    i = 0, j = 0;
    int x =n;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            for (size_t k = i; k < n; k++)
            {
                temp = a[k];
                a[k] = a[k + 1];
                a[k + 1] = temp;
            }
            x--;
            i++;
            j++;
            
        }
    }

    // Print set difference
    for (i = 0; i < x; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}

