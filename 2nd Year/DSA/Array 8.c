/*Program for merging two sorted arrays*/
#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter size of array 1 :");
    scanf("%d",&n);
    printf("Enter size of array 2 :");
    scanf("%d",&m);
    int a[n],b[m],r[m+n];
    //Inputing Array
    printf("Enter Elements in array 1:\n");
    for (size_t i = 0; i <n; i++)
    {
        printf("Enter the element :");
        scanf("%d",&a[i]);
    }
    //Inputing Array
    printf("Enter Elements in array 2:\n");
    for (size_t i = 0; i <m; i++)
    {
        printf("Enter the element :");
        scanf("%d",&b[i]);
    }
    int i=0,j=0,k=0;
    while (i<n && j<m)
    {
        if (a[i]<b[j])
        {
            r[k] = a[i];
            i++;
            k++;
        }
        else
        {
            r[k]=b[j];
            j++;
            k++;
        }
    }
    if (n<=m)
    {
        while (j<m)
        {
            r[k]=b[j];
            k++;
            j++;
        }
        
    }
    else
    {
        while (i<m)
        {
            r[k]=a[i];
            i++;
            k++;
        }
        
    }
    printf("Array after Merging is:\n");
    for (size_t i = 0; i <k; i++)
    {
        printf("%d\t",r[i]);
    }
    return 0;
}
