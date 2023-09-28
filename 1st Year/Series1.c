# include<stdio.h>
#include<math.h>
void main()
{
    int n,x,f;
    float y,z=1;
    printf("Give the value of n and x :");
    scanf("%d %d",&n,&x);
    f=1;
    for (size_t j = 1; j <=n; j++)
    {
        f=f*j;
        y = pow((float)x,j)/f;
        z =z+y;
    }
    printf("%.2f",z);
}