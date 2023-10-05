/*Check whether an alphabet entered by the user is a vowel or a consonant.*/
#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter the Character:");
    scanf("%c",&ch);
    ch = tolower(ch);
    if (ch=='a' || ch=='e' || ch=='o' ||ch=='u' ||ch=='i')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
    
    return 0;
}
