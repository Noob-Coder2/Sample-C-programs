#include <stdio.h>
#include <math.h>
int main()
{
    int n, m, a, temp, c=0,i;
    printf("Enter lower limit:");
    scanf("%d", &n);
    printf("Enter upper limit:");
    scanf("%d", &m);

    for (i = n; i <= m; i++)
    {

        int arm = 0, size;
        temp = i;
        size = log10(i)+1;
        // Calculate armstrong number
        while (temp > 0)
        {
            a = temp % 10;
            temp = temp/10;
            arm = arm + pow(a, size);   
        }
        
        if (arm == i)
        {
            printf("%d\t",i);
            c++;
        }
    }
    printf("\n%d",c);
    return 0;
}
