/*Write a program to find the sum of the series using the function. a) 1/1!-2/3!+3/5!-4/7!+…*/

#include <stdio.h>

int main()
{
    int n,i,sign=-1;
    float sum;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    if (n==0)
    {
        printf("%d",sum);
        return 0;
    }
    sum = 1;
    float den=1;
    for (i = 1; i < n; i++)
    {
        den = sign*den*(2*i)*((2*i)+1);
        sum = sum + ((i+1)/den);
    }
    printf("%.3f",sum);
    return 0;
}

