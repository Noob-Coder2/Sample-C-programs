#include <stdio.h>
int main()
{
    int a = 0,b=1,n,c;
    printf("Enter the Number of terms :");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("0");
        break;
    case 2:
    printf("0");
    printf("\n1");
    
    default:
        printf("0");
        printf("\n1");
        for (size_t i = 2; i <n; i++)
        {
            c=a+b;
            a=b;
            b=c;
            printf("\n%d",c);
        }
        
    }
    return 0;
}
