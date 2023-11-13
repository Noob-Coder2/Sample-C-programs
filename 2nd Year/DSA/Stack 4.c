/*Program for Decimal to Hexadecimal Conversion*/

#include <stdio.h>
#define size 20

char stack[size];
int top = -1;
char hex[16]= {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

void push(char data)
{
    if (top == size-1)
    {
        printf("Stack Overflow");
        return;
    }
    top++;
    stack[top] = data;
    return;
}

int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow");
        return -1;
    }
    char data = stack[top];
    top--;
    return data;
}

void display()
{
    for (int i = top; i>=0; i--)
    {
        printf("%c",stack[i]);
    }
}

int main()
{
    int num,n=0;
    printf("Enter number :");
    scanf("%d",&num);
    while (num >0)
    {
        int m = num%16;
        push(hex[m]);
        num=(num-m)/16;
        n++;
    }
    display();
    return 0;
}