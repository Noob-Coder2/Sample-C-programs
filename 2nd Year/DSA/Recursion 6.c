/*Program for Towers of Hanoi for n disk (user defined)*/
#include <stdio.h>

void TOH(int n, char A[10], char B[10], char C[10])
{
    if (n==1)
    {
        printf("Move disc %d from %s to %s\n",n,A,C);
        return;
    }
    TOH(n-1,A,C,B);
    printf("Move disc %d from %s to %s\n",n,A,C);
    TOH(n-1,B,A,C);
}

void main()
{
    TOH(3,"1st Tower","2nd Tower","3rd Tower");
}
