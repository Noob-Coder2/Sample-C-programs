#include <stdio.h>
#include <string.h>

int main(int n1,int n2,int sum)
{
    int*p1=&n1;
    int*p2=&n2;
    int*p3=&sum;
    scanf("%d",p1);
    scanf("%d",p2);
    sum = *p1+*p2;
    printf("Sum is %d",*p3);
    return 0;
}
