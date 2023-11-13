/*Program for Decimal to Any Base Conversion*/

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
        printf("%d ",stack[i]);
    }
}

int main()
{
    int num,n=0,base;
    printf("Enter number :");
    scanf("%d",&num);
    printf("Enter base : ");
    scanf("%d",&base);
    while (num >0)
    {
        int m = num%base;
        push(m);
        num=(num-m)/base;
        n++;
    }
    display();
    return 0;
}
