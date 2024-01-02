#include<stdio.h>
#define n 5
int front= -1,rear = -1;
int queue[n];
void enqueue(int x)
{
    if(((rear+1)%n)==front)
    {
        printf("overflow\n");
    }
    else if(front == -1 && rear == -1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else
    {
        rear=(rear+1)%n;
        queue[rear]=x;
    }
}
void dequeue()
{
    if(front == -1 && rear == -1)
    {
        printf("empty\n");
    }
    else if(front==rear)
    {
        printf("%d\n",queue[front]);
        front=rear=-1;
    }
    else
    {
        printf("%d\n",queue[front]);
        front=(front+1)%n;
    }
}
void display()
{
    int i=front;
    if(front == -1 && rear == -1)
    {
        printf("empty\n");
    }
    else
    {
        while(i!=rear)
        {
            printf("%d ",queue[i]);
            i=(i+1)%n;
        }
        printf("%d ",queue[rear]);
    }
}
int main()
{
    enqueue(5);
    enqueue(7);
    enqueue(10);
    dequeue();
    dequeue();
    enqueue(20);
    enqueue(25);
    enqueue(30);
    enqueue(40);
    display();
    return 0;
}

