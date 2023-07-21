#include <stdio.h>
#define max 5
int arr[max];
int front = -1, rear = -1;

void enQueue(int data)
{
    if(front == -1 && rear == -1)
    {
        front = rear = 0;
        arr[front] = data;
    }
    else if((rear+1)%max == front)
    {
        printf("Queue is FULL");
    }
    else
    {
        rear = (rear+1)%max;
        arr[rear] = data;
    }
}

void deQueue()
{
    if(front == -1 &&  rear == -1)
    {
        printf("Queue is EMPTY");
    }
    else if(front == rear)
    {
        front = rear = 0;
    }
    else
    {
        printf("\nDeleted Element: %d",arr[front]);
        front = (front+1)%max;
    }
}
void display()
{
    printf("\n");
    for(int i=front; i<=rear; i=(i+1)%max){
        printf("%d ",arr[i]);
    }
}

int main()
{
    for(int i = 0; i < max; i++)
    {
        printf("Enter the data: ");
        int data; scanf("%d",&data);
        enQueue(data);
    }
    deQueue();
    deQueue();
    enQueue(10);
    enQueue(11);
    display();
}
