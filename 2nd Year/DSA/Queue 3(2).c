/*Program for ArrayImplementation of Double Ended Queue*/
/*Ouput Restricted*/
#include <stdio.h>
#define size 5


int que[size];
int front1 = -1;
int rear1 = -1;
int front2 = size;
int rear2 = size;

void enque_left(int  data)  // Insertion
{
    if (rear1 == rear2-1)
    {
        printf("Overflow\n");
        return;
    }
    if (front1 == -1)
    {
        front1++;
    }
    rear1++;
    que[rear1] = data;
    return;
    
}

void enque_right(int data)
{
    if (rear2 == rear1+1)
    {
        printf("Overflow\n");
        return;
    }
    if (front2 == size)
    {
        front2--;
    }
    rear2--;
    que[rear2] = data;
    return;
}

int dequeue()
{
    int data;
    if (rear1 == -1 && rear2 == size)
    {
        printf("Underflow\n");
        return -1;
    }
    else if (front1<rear1)
    {
        data = que[front1];
        front1++;
    }
    else if (front2>rear2)
    {
        data = que[front2];
        front2--;
    }
    else if (front1 == rear1 && front1!=-1)
    {
        data = que[front1];
        front1 = -1;
        rear1 = -1;
    }
    else if (front2 == rear2 && front2!=size)
    {
        data = que[front2];
        front2 = size;
        rear2 = size;
    }
    return data;
}

void display()
{
    int i;
    printf("Elements in Queue are :\n");
    printf("Element from left(front1) are:\n");
    for (i = front1; i <= rear1; i++)
    {
        printf("%d\n",que[i]);
    }
    printf("Element from right(front2) are:\n");
    for (i = front2; i >= rear2; i--)
    {
        printf("%d\n",que[i]);
    }
    return;
}

void option()
{
    int opt,data;
    printf("Press \n\
    1 - Enqueue from left\n\
    2 - Enqueue from right\n\
    3 - Dequeue \n\
    4 - Display\n");
    scanf("%d",&opt);
    switch (opt)
    {
    case 1:
        printf("Enter Element from left:");
        scanf("%d",&data);
        enque_left(data);
        break;
    case 2:
        printf("Enter Element from right :");
        scanf("%d",&data);
        enque_right(data);
        break;
    case 3:
        data = dequeue();
        if (data != -1)
        {
            printf("Deleted Element is :%d\n",data);
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
    option();
    return 0;
}

