#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct QueueNode
{
    int data;
    struct QueueNode *next;
}*ptr,*front=NULL,*rear=NULL,*temp;

bool isEmpty(struct QueueNode *front)
{
    if(front == NULL)
    {
        return true;
    }
    return false;
}

void enQueue(int data)
{
    ptr = (struct QueueNode*)malloc(sizeof(struct QueueNode));
    ptr->data = data;
    ptr->next = NULL;
    if(front == NULL)
    {
        front = ptr;
        rear = ptr;
    }
    else
    {
        rear->next = ptr;
        rear = ptr;
    }
}

void TraverseQueue(struct QueueNode *front)
{
    temp = front;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

void peek(struct QueueNode *front)
{
    if(isEmpty(front))
    {
        printf("Empty");
        return;
    }
    printf("\nThe peek data : %d ",front->data);
}

void deQueue(struct QueueNode *temp)
{
    front = temp->next;
    if(front==NULL)
    {
        printf("UnderFlow");
    }
    else
    {
        TraverseQueue(front);
    }
}

int main()
{
    for(int i = 0; i < 5; i++)
    {
        int data;
        printf("Enter the data: ");
        scanf("%d",&data);
        enQueue(data);
    }

    TraverseQueue(front);
    printf("\n");
    deQueue(front);
    peek(front);

}
