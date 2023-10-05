#include <stdio.h>
//Selection Sort
int main()
{
    int n,i,min,t;
    int a[10];
    printf("How many elements you want to enter? ");
    scanf("%d",&n);
    for (size_t k = 0; k <n; k++)
    {
        printf("Enter the element :");
        scanf("%d",&a[k]);
    }
    for (size_t i = 0; i <n; i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
             if(a[min]>a[j])
             min=j;
        }
        if (min!=i){
        t=a[min];
        a[min]=a[i];
        a[i]=t;
        }
    }
    printf("New array is:\n");
    for (size_t i = 0; i <n; i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}

//Bubble Sort
int main()
{
    int n,e,min,t;
    int a[10];
    printf("How many elements you want to enter? ");
    scanf("%d",&n);
    for (size_t k = 0; k <n; k++)
    {
        printf("Enter the element :");
        scanf("%d",&a[k]);
    }
    for (size_t i = 0; i<n ; i++)
    {
        for (size_t j = i; j < n; j++)
        {
            if (a[i]>a[j])
            {e = a[i];
            a[i]=a[j];
            a[j]=e;}
        }   
    }
    printf("New array is:\n");
    for (size_t i = 0; i <n; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
