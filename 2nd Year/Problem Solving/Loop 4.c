#include <stdio.h>

int main()
{
    int row;
    char n ='A';
    printf("Enter number of rows : ");
    scanf("%d",&row);
    for (char i = 'A'; i < 'A'+row; i++)
    {
        for (char j = 'A'; j <=i; j++)
        {
            printf("%c ",n);
            n++;
        }
        printf("\n");
        n = i+1;
    }
    return 0;
}
