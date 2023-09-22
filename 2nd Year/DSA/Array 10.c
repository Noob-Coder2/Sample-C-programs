#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter size of array 1 :");
    scanf("%d", &n);
    printf("Enter size of array 2 :");
    scanf("%d", &m);
    int a[n], b[m], r[m + n];
    // Inputing Array
    printf("Enter Elements in array 1:\n");
    for (size_t i = 0; i < n; i++)
    {
        printf("Enter the element :");
        scanf("%d", &a[i]);
    }
    // Inputing Array
    printf("Enter Elements in array 2:\n");
    for (size_t i = 0; i < m; i++)
    {
        printf("Enter the element :");
        scanf("%d", &b[i]);
    }
    
    return 0;
}
