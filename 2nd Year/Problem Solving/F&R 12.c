/*reverse of a number using recursion*/
#include <stdio.h>

int reverse(int n, int num)
{
    if (n==0)
    {
        return num;
    }
    int m = n%10;
    num = num*10 +m;
    num = reverse(n/10,num);
    return num;
}

int main()
{
    int n;
    printf("Enter NUmber : ");
    scanf("%d",&n);
    printf("Reverse Number is : %d",reverse(n,0));
    return 0;
}
