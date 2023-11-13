/*Program for traversing array elements.*/
#include <stdio.h>
int main()
{
    int n,c=0;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    int a[n];
    printf("Enter ELEMENTS:");
    for (size_t i = 0; i <n; i++)
    {
            scanf("%d",&a[i]);
    }
    printf("Elements in array is :\n");
    for (size_t i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
