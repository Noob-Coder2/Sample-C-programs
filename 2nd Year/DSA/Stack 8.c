/*Program to check if the given number is a palindrome using stacks*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#define size 10

int stack1[size];
int top1 = -1;
int stack2[size];
int top2 = -1;

void push(int data)
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
    int data = stack1[top1];
    top1--;
    return data;
}

int main()
{
    int num, len;
    printf("Enter number : ");
    scanf("%d", &num);
    len = log10(num) + 1;
    for (int i = 0; i < len; i++)
    {
        push(num % 10);
        num = num / 10;
    }
    for (int i = 1; i <= len; i++)
    {
        stack2[i - 1] = stack1[len - i];
    }
    int result = memcmp(stack1, stack2, len);
    if (result == 0)
    {
        printf("Number is palindrome");
    }
    else
    {
        printf("Number is not palindrome");
    }
    return 0;
}
