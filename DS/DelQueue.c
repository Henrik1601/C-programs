#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*ptr,*front,*rear;

struct node* deletion(struct node *front, struct node *rear)
{
    return front=front->next;
}

void display(struct node *front, struct node *rear)
{
    while(front!=rear->next)
    {
        printf("%d ",front->data);
        front=front->next;
    }
}

int main()
{
    for(int i=0;i<5;i++)
    {
        ptr=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&ptr->data);
        ptr->next=NULL;
        if(front==NULL)
        {
            front=ptr;
            rear=ptr;
        }
        else
        {
            rear->next=ptr;
            rear=ptr;
        }
    }
    front=deletion(front,rear);
    display(front,rear);
}
