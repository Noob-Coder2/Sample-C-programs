/*Display Prime Numbers Between Intervals Using Function*/

#include <stdio.h>

void prime(int n, int n2)
{
    int arr[1000] = {0};
    int i,j;
    for (i = 2; i <n; i+=2)   // To eliminate all numbers divisible by 2
    {                               // Other loop to reduce complexity 
        arr[i+2]=1;
    }

    for (i = 3; i*i <=n ; i+=2)
    {
        if (arr[i] == 0)
        {
            for (j = i*2; j <=n; j+=i)
            {
                if (j%i == 0)
                {
                    arr[j] =1;
                }
            }
        }
    }
    for (size_t i = n2; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            printf("%d\n",i);
        }   
    }
}

int main()
{
    int n1,n2,i;
    printf("Enter Lower Limit : ");
    scanf("%d",&n1);
    printf("Enter Upper Limit : ");
    scanf("%d",&n2);
    if (n1<2)
    {
        n1 =2;
    }
    prime(n2,n1);
    return 0;
}
