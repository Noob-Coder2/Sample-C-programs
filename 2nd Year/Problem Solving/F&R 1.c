/*Program to find if the given no is a palindrome*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

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

void ispalindrome(int n)
{
    int m = reverse(n,0);
    if (n == m)
    {
        printf("Number is Palindrome");
    }
    else
    {
        printf("Number is not Palindrome");
    }
    return;
}

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    ispalindrome(n);
    return 0;
}
