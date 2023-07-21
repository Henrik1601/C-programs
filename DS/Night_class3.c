#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
}*ptr,*newnode,*head,*temp,*top,*queue,*front,*rear;
int main()
{
    int num; scanf("%d",&num);
    for(int i=0;i<num;i++){
        ptr=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&ptr->data);
        ptr->next=NULL;
        if(top==NULL)
        {
            top=ptr;
        }
        else
        {
            ptr->next=top;
            top=ptr;
        }
    }
    temp=top;
    while(temp!=NULL)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=temp->data;
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
        }
        else
        {
            newnode->next=head;
            head=newnode;
        }
        temp=temp->next;
    }
    temp=head;
    printf("\nSecond Stack\n");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL)
    {
        queue=(struct node*)malloc(sizeof(struct node));
        queue->data=temp->data;
        queue->next=NULL;
        if(front==NULL)
        {
            front=queue;
            rear=queue;
        }
        else
        {
            rear->next=queue;
            rear=queue;
        }
        temp=temp->next;
    }
    temp=front;
    printf("\nQueue Implementation\n");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
