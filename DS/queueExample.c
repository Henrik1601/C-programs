#include <stdio.h>
#include <stdbool.h>
#define size 5

int arr[size];
    int front=-1;
    int rear=-1;

void display(int first, int last)
{
    while(first!=last)
    {
        printf("%d ",arr[first++]);
    }
}

void deletion(int front, int rear)
{
    while(front!=rear)
    {
        front++;
        display(front,rear);
        printf("\n");
    }
    if(front==rear)
    {
        printf("No more Element in the queue");
    }
}

int main()
{
    while(1)
    {
        int data; scanf("%d",&data);
        if(rear<size)
        {
            if(front==-1 && rear==-1)
            {
                front++; rear++;
                arr[front]=data;
            }
            else
            {
                arr[rear]=data;
            }
            rear++;
        }
        else
        {
            break;
        }
    }
    int temp=front;
    display(temp,rear);
    printf("\n");
    deletion(front,rear);
}
