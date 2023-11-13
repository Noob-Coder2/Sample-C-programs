/*Program to check the validity of Parenthesized Arithmetic Expression using Stack*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define size 20

char stack[size];
int top = -1;

void push(char data)
{
    if (top == size-1)
    {
        printf("Stack Overflow");
        return;
    }
    top++;
    stack[top]=data;
    return;
}

char pop()
{
    if (top == -1)
    {
        printf("Stack Empty");
    }
    char data = stack[top];
    top--;
    return data;
}

bool is_matching(char char1, char char2)
{
    if (char1 == '(' && char2 == ')')
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

bool is_balanced(char *st)
{
    int i;
    for (i = 0; i < strlen(st); i++)
    {
        if (st[i] == '(')
        {
            push(st[i]);
        }
        else if (st[i] == ')')
        {
            if (top == -1)
            {
                return false;
            }
            else if (is_matching(pop(),st[i]))
            {
                return true;
            }
            else
            {
                return false;
            }   
        }    
    }   
}

int main()
{
    char text[size];
    printf("Input an expression in parentheses : ");
    scanf("%s", text);
    if (is_balanced(text))
    {
        printf("Expression is Balanced.");
    }
    else
    {
        printf("The expression is not balanced");
    }
    return 0;
}


/*Without Stack
#include<stdio.h>
int main()
{
    char expression[50];
    int x=0, i=0;
    printf("\nEnter an expression");
    scanf("%s", expression);

 while(expression[i]!= '\0')
    {

     if(expression[i]=='(')
        {
            x++;
        }

     else if(expression[i]==')')
        {
            x--;
            if(x<0)
            break;
        }
    i++;
    }

    if(x==0)
    {
        printf("Expression is balanced");
    }

    else
    {
        printf("Expression is unbalanced");
    }
    return 0;
}
*/

