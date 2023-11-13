/*Program to Reverse the given String using Stack*/

#include <stdio.h>
#include <string.h>
#define size 20

char stack1[size];
int top1 = -1;

void push(char data)
{
    if (top1 == size - 1)
    {
        printf("Stack Overflow");
        return;
    }
    top1++;
    stack1[top1] = data;
}

int pop()
{
    if (top1 == -1)
    {
        printf("Stack Underflow");
        return -1;
    }
    char data = stack1[top1];
    top1--;
    return data;
}

int main()
{
    int len, i;
    char st[size];
    printf("Enter string : ");
    gets(st);
    len = strlen(st);
    for (i = 0; i < len; i++)
    {
        push(st[i]);
    }
    for (i = 0; i < len; i++)
    {
        st[i] = pop();
    }
    puts(st);
    return 0;
}