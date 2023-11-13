/*Program for reversal of an array.*/
#include <stdio.h>
int main()
{
    int n,c,i;
    int a[10],b[10];
    printf("How many elements you want to enter? ");
    scanf("%d",&n);
    for (size_t k = 0; k <n; k++)
    {
        printf("Enter the element :");
        scanf("%d",&a[k]);
    }
    for (size_t i = 0; i <n; i++)
    {
        b[i]=a[n-i-1];
    }
    for (size_t i = 0; i <n; i++)
    {
        a[i]=a[i];
    }
    
    printf("New array is:\n");
    for (size_t i = 0; i <n; i++)
    {
        printf("%d\n",b[i]);
    }
    
    return 0;
}

