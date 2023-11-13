#include <stdio.h>

int main()
{
    int n,f=1;
    printf("Enter Number :");
    scanf("%d",&n);
    for (size_t i = n; i >1; i--)
    {
        f *= i;
    }
    printf("Factorial is : %d",f);
    
    return 0;
}
