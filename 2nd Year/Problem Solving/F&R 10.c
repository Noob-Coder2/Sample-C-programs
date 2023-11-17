/*gcd of two numbers using recursion*/

#include <stdio.h>

int gcd(int a, int b)
{
    if (a == 0) {
    return b;
    }
    else if (b == 0) {
    return a;
    }
    else {
        if (a>b) {
            return gcd(a%b,b);
        }
        else {
            return gcd(a,b%a);
        }
    }
}

int main()
{
    int n1,n2;
    printf("Enter Number 1 : ");
    scanf("%d",&n1);
    printf("Enter Number 2 : ");
    scanf("%d",&n2);
    printf("%d",gcd(n1,n2));
    return 0;
}