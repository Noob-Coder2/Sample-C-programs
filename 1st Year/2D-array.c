#include <stdio.h>
int main()
{
    int i,k;
    int j[3];
    int m[3][3] = {{1,2,3},{12,34,56},{123,456,789}};
    for (i = 0; i < 3; i++)
    {
        for (k = 0; k < 3; k++)
        {
            j[k] = m[i][k];
            printf("%d\t",j[k]);
        }printf("\n");
    }
    
return 0;
}
