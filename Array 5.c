/*Program for Missing number in an array*/
#include<stdio.h>
int main()
{
    int a[10]= {1,2,3,4,6,7,8,9};
    int mis;
    for (size_t i = 0; i < 10; i++)
    {
        if (a[i+1]!=a[i]+1)
        {
            mis = a[i]+1;
            break;
        }
        
    }
    printf("Missing element is:%d",mis);
    return 0;
}