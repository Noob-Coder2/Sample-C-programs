/*Program for insertion in the sorted array*/
#include <stdio.h>
int main()
{
    int i=8,temp;
    int a[10] = {0,24,32,54,62,70,84,92,215};
    printf("Enter the element: ");
    scanf("%d",&a[9]);
    while (a[i]>a[i+1])
    {
        temp = a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        i--;
    }
    printf("Elements in array is :\n");
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
