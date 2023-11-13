/*Program for Symmetric Set Difference*/
#include <stdio.h>

int main()
{
    int n, m, i, j, k = 0;
    printf("Enter size of array 1 :");
    scanf("%d", &n);
    printf("Enter size of array 2 :");
    scanf("%d", &m);
    int a[n], b[m], r[m + n];
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
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            r[k] = a[i];
            i++;
            k++;
        }
        else if (a[i] > b[j])
        {
            r[k] = b[j];
            j++;
            k++;
        }
        else
        {
            i++;
            j++;
        }
    }

    // Process remaining elements in array a, if any
    while (i < n)
    {
        r[k] = a[i];
        i++;
        k++;
    }

    // Process remaining elements in array b, if any
    while (j < m)
    {
        r[k] = b[j];
        j++;
        k++;
    }

    // Print symmetric set difference
    for (i = 0; i < k; i++)
    {
        printf("%d\t", r[i]);
    }
    return 0;
}

