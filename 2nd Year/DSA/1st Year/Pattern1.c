# include<stdio.h>
void main()
{
    int b = 65;
    for (size_t i = 1; i <= 5; i++)
    {
        for (size_t j = 0; j <i; j++)
        {
            printf("%c",b);
        }
        printf("\n");
        b++;
    }
    
}