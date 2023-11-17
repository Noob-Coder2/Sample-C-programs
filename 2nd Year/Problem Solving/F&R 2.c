/*Write a program to find mean and median of five numbers using function*/

#include <stdio.h>

int mean(int arr[5])
{
    int m = (arr[0]+arr[1]+arr[2]+arr[3]+arr[4])/5;
    return m;
}

int median(int arr[5])
{
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = i+1; j < 5; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr[2];
}

int main()
{
    int arr[5];
    for (size_t i = 0; i < 5; i++)
    {
        printf("Enter Number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Mean is %d\n",mean(arr));
    printf("\nMedian is %d",median(arr));
    return 0;
}
