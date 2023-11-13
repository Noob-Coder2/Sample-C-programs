/*Program to check the validity of Bracketed Arithmetic Expression using Stack*/

#include <stdio.h>
#include <string.h>
#define max_size 100

char stack[max_size];
int top = -1;

void push(char data)
{
    if (top == max_size - 1)
    {
        printf("Stack Overflow.");
        return;
    }
    top++;
    stack[top] = data;
}

char pop()
{
    if (top == -1)
    {
        printf("Empty Stack.\n");
        return ' ';
    }
    char data = stack[top];
    return data;
}

int is_matching_pair(char char1, char char2)
{
    if (char1 == '(' && char2 == ')')
    {
        return 1; // 1 = True
    }

    if (char1 == '{' && char2 == '}')
    {
        return 1;
    }

    if (char1 == '[' && char2 == ']')
    {
        return 1;
    }
    else
    {
        return 0; // 0 = False
    }
}

int isBalnced(char *text)
{
    int i;
    for (i = 0; i < strlen(text); i++)
    {
        if (text[i] == '(' || text[i] == '{' || text[i] == '[')
        {
            push(text[i]);
        }
        else if (text[i] == ')' || text[i] == '}' || text[i] == ']')
        {
            if (top == -1)
            {
                return 0;
            }
            else if (!is_matching_pair(pop(), text[i]))
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }
}

int main()
{
    char text[max_size];
    printf("Input an expression in parentheses : ");
    scanf("%s", text);
    if (isBalnced(text))
    {
        printf("Expression is Balanced.");
    }
    else
    {
        printf("The expression is not balanced");
    }
    return 0;
}

