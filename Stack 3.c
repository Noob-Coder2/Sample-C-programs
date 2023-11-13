/*Program for Decimal to Octal Conversion*/

#include <stdio.h>
#define size 20

int stack[size];
int top = -1;

void push(int data)
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
    int data = stack[top];
    top--;
    return data;
}

void display()
{
    for (int i = top; i>=0; i--)
    {
        printf("%d",stack[i]);
    }
}

int main()
{
    int num,n=0;
    printf("Enter number :");
    scanf("%d",&num);
    while (num >0)
    {
        int m = num%8;
        push(m);
        num=(num-m)/8;
        n++;
    }
    display();
    return 0;
}
