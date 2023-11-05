/*Program to insert the given elements into an array.*/
#include <stdio.h>
int main()
{
    int ele,pos,temp,i=8;
    int a[10]={0,1,2,3,4,5,6,7,8};
    printf("Enter the element you want to insert and its position :");
    scanf("%d%d",&ele,&pos);
    a[9]=ele;
    while(i>=pos)
    {
            temp=a[i];
            a[i]=ele;
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
