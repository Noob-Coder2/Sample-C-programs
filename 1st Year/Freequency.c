#include <stdio.h>
int main()
{
    int n,c,i;
    int a[10];
    printf("How many elements you want to enter? ");
    scanf("%d",&n);
    for (size_t k = 0; k <n; k++)
    {
        printf("Enter the element :");
        scanf("%d",&a[k]);
    }
    for (i = 0; i <n; i++)
    {
        c=0;
        for (size_t j = 0; j <n; j++)
        {
            if (a[i]==a[j] )
            {c++;}
        }
        printf("Frequency of %d is %d.\n",a[i],c);
    }
    return 0;
}
