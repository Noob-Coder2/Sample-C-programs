/*Program for ArrayImplementation of Double Ended Queue*/
/*Input Restricted*/
#include <stdio.h>
#define size 5


int que[size];
int front = -1;
int rear = -1;

void enqueue(int  data)  // Insertion
{
    if (/*front == -1 && */rear == size-1)
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

int deque_left()       // Deletion from left ->
{
    int data;
    if (front == -1)
    {
        printf("Underflow\n");
        return -1;
    }
    data = que[front];
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

int deque_right()       // Deletion from right <-
{
    int data;
    if (rear == -1)
    {
        printf("Underflow");
        return -1;
    }
    data = que[rear];
    if (rear == front)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        rear--;
    }
    return data;
}


void display()
{
    if (front == rear)
    {
        printf("Queue is Empty");
    }
    else
    {
        int i;
        printf("Elements in Queue are : \n");
        for (i = front; i <=rear; i++)
        {
            printf("%d\n", que[i]);
        }
    }
}

void option()
{
    int opt,data;
    printf("Press \n\
    1 - Enqueue \n\
    2 - Deletion from left\n\
    3 - Deletion from right \n\
    4 - Display \n");
    scanf("%d",&opt);
    switch (opt)
    {
    case 1:
        printf("Enter Element :");
        scanf("%d",&data);
        enqueue(data);
        break;
    case 2:
        data = deque_left();
        if (data != -1)
        {
            printf("Deleted Element from left is :%d\n",data);
        }
        break;
    case 3:
        data = deque_right();
        if (data != -1)
        {
            printf("Deleted Element from right is :%d\n",data);
        }
        break;
    case 4:
        display();
        break;
    default:
        printf("Wrong Option");
        break;
    }
    char op;
    printf("Do you want to continue[y/n] :");
    scanf(" %c",&op);
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
    int n,data,opt;
    printf("Enter number of elements :");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter Elements in Queue :");
        scanf("%d",&data);
        enqueue(data);
    }
    option();
    return 0;
}


