/*Program of Array Implementaion of CircularQueue*/

#include <stdio.h>
#define size 5


int que[size];
int front = -1;
int rear = -1;

void enqueue(int  data)  // Insertion
{
    if ((front == 0 && rear == size-1)|| (rear == front-1))
    {
        printf("Overflow\n");
        return;
    }
    if (front == -1)
    {
        front++;
    }
    if (rear == size -1)
    {
        rear =0;
    }
    else
    {
        rear++;
    }
    que[rear] = data;
    return;
}

int dequeue()       // Deletion
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
    else if (front <size -1)
    {
        front++;
    }
    else // front >=size
    {
        front = 0;
    }
    return data;
}

void display()
{
    int i;
    if (rear<front)
    {
        for (i = front; i < size; i++)
        {
            printf("%d\n",que[i]);
        }
        for (i = 0; i <=rear; i++)
        {
            printf("%d\n",que[i]);
        }
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            printf("%d\n",que[i]);
        }
    }
    return;
}
void option()
{
    int opt,data;
    printf("Press \n\
    1 - Enqueue \n\
    2 - Dequeue \n\
    3 - Display \n");
    scanf("%d",&opt);
    switch (opt)
    {
    case 1:
        printf("Enter Element :");
        scanf("%d",&data);
        enqueue(data);
        break;
    case 2:
        data = dequeue();
        if (data != -1)
        {
            printf("Deleted Element is :%d\n",data);
        }
        break;
    case 3:
        printf("Elements in Queue are:\n");
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


