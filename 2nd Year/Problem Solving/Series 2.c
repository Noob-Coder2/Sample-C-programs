/*Write a program to find the sum of the series using the function. a) 1!/1+2!/2+3!/3+4!/4+5!/5*/

#include <stdio.h>

//Method 1
/*
int main()
{
    int n,sum=0,k=1;
    printf("Enter Number of terms :");
    scanf("%d",&n);
    for (size_t i = 1; i <n; i++)
    {
        k*=i;
        sum += k;
    }
    printf("%d",sum+1);
    return 0;
}
*/
//Method 2
int main()
{
    int n,sum=0,k=1;
    printf("Enter Number of terms :");
    scanf("%d",&n);
    for (size_t i = 1; i <=n; i++)
    {
        k*=i;
        sum += k/i;
    }
    printf("%d",sum);
    return 0;
}
