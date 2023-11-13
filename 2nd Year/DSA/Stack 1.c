/*Program for Stack Primitive Operations*/

#include <stdio.h>
#define size 10


int stack[size];
int top =-1;

void push(int data)
{
    if (top == size-1)
    {
        printf("Stack Overflow");
        return;
    }
    top++;
    stack[top] = data;
    printf("Data added to stack");
    return;
}

int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    int data = stack[top];
    top--;
    return data;
}

int main()
{
    int opt,data;
    printf("Press\n \
    1 - Push\n \
    2 - Pop\n");
    scanf("%d",&opt);
    switch (opt)
    {
    case 1:
        printf("Enter Data : ");
        scanf("%d",&data);
        push(data);
        break;
    
    case 2:
        int s = pop();
        if (s!=-1)
        {
            printf("%d",s);
        }
        break;

    default:
        printf("Wrong Option");
        break;
    }

    return 0;
}

