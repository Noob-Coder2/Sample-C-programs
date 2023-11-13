/*Program for delete the given elements into an array.*/
#include<stdio.h>
int main()
{
    int a[10]= {10,20,30,64,12,5,96,54,24};
    int ele,pos,temp;
    printf("Enter element you want to delete :");
    scanf("%d",&ele);
    for (size_t i = 0; i < 10; i++)
    {
        if (a[i]==ele)
        {
            pos=i;
        }
    }
    for (size_t i = pos; i < 10; i++)
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    
    printf("New array is:\n");
    for (size_t i = 0; i < 8; i++)
    {
        printf("%d\t",a[i]);
    }
    
    return 0;
}
