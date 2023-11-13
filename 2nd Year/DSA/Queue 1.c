/*Program of Array Implementaion of Linear Queue*/
#include <stdio.h>
#define size 10

int que[size];
int front = -1;
int rear = -1;

void enqueue(int data) // Insertion
{
    if (front == -1 && rear == size - 1)
    {
        printf("Overflow");
        return;
    }
    if (front == -1)
    {
        front++;
    }
    rear++;
    que[rear] = data;
    return;
}

int dequeue() // Deletion
{
    if (front == -1)
    {
        printf("Underflow");
        return -1;
    }
    int data = que[front];
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front++;
    }
    return data;
}

void display()
{
    if (front == -1)
    {
        printf("Queue is Empty");
    }
    else
    {
        printf("Elements in Queue are : \n");
        while (front <= rear)
        {
            printf("%d\n", que[front]);
        }
    }
}

void option()
{
    int opt, data;
    printf("Press \n\
    1 - Enqueue \n\
    2 - Dequeue \n\
    3 - Display \n");
    scanf("%d", &opt);
    switch (opt)
    {
    case 1:
        printf("Enter Element :");
        scanf("%d", &data);
        enqueue(data);
        break;
    case 2:
        data = dequeue();
        if (data != -1)
        {
            printf("Deleted Element is :%d\n", data);
        }
        break;
    case 3:
        display();
        break;

    default:
        printf("Wrong Option");
        break;
    }
    char op;
    printf("Do you want to continue[y/n] :");
    scanf(" %c", &op);
    if (op == 'y')
    {
        option();
    }
    else
    {
        printf("----Exiting Program --------");
    }
}

int main()
{
    int n, data, opt;
    printf("Enter number of elements :");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter Elements in Queue :");
        scanf("%d", &data);
        enqueue(data);
    }
    option();
    return 0;
}

