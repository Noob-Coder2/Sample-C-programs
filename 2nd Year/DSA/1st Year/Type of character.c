#include <stdio.h>
void main()
{
    char i;
    printf("Enter the character :");
    scanf("%c",&i);
    int k = i;
    if (k>=48 && k<=57)
    {
        printf("Numeric");
    }
    else if (k>=65 && k<=90)
    {
        printf("Uppercase");
    }
    else if (k>=97 && k<=122)
    {
        printf("Lowercase");
    }
    else
    {
        printf("Special Character");
    } 
}
