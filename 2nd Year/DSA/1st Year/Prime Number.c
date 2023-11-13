#include <stdio.h>
int main()
{
    int n,a;
    printf("No. of integers:");
    scanf("%d",&n);
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d",&a);
        int c=0;
        for (size_t j = 2; j<a; j++)
        {
            if (a%j==0)
            {
                c++;
            }
        }
        if (c==0)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    
    return 0;
}
