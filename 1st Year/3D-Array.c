#include <stdio.h>
int main()
{
    int i,k,l;
    int n[3];
    int m[3][3][3] = {{{1,2,3},{4,5,6},{7,8,9}},{{12,23,45},{56,78,89},{10,20,30}},{{123,456,789},{147,258,369},{741,852,963}}};
    for (i = 0; i < 3; i++)
    {
        for (k = 0; k < 3; k++)
        {
            for (l = 0; l < 3; l++)
            {
                n[l] = m[i][k][l];
                
            printf("%d-%d\t",l,n[l]);
            }printf("\n");
        }printf("\n");
        
    }
    
return 0;
}
