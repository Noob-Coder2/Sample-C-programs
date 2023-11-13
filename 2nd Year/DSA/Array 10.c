/*Program for Set Intersection*/
#include <stdio.h>

int main()
{
    int n, m,i,j,k=0;
    printf("Enter size of array 1 :");
    scanf("%d", &n);
    printf("Enter size of array 2 :");
    scanf("%d", &m);
    int a[n], b[m], r[m];
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
    i =0, j=0;
    while (i<n && j<m)
    {
        if (a[i]<b[j])
        {
            i++;
        }
        else if (a[i]>b[j])
        {
            j++;
        }
        else
        {
            r[k]=a[i];
            i++;
            j++;
            k++;
        }
    }

//Print Insertion set
for (i = 0; i <k; i++)
{
    printf("%d\t",r[i]);
}
    return 0;
}

