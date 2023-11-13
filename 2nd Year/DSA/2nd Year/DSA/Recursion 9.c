/*To check if the given string is a palindrome using Recursion*/

#include <stdio.h>
#include <string.h>

void palindorme(int n, int i, char str[n + 1])
{
    if (n - 1 == i)
    {
        printf("String is Palindrome.");
        return;
    }
    if (str[i] != str[n - 1])
    {
        printf("String is not Palindrome.");
        return;
    }
    return palindorme(n - 1, i + 1, str);
}

void main()
{
    int n, i = 0;
    char str[100];
    printf("Enter String : ");
    gets(str);
    n = strlen(str);
    palindorme(n, i, str);
}
