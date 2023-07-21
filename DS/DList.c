#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*prev;
    struct node*next;
}*ptr,*head,*tail;

int main()
{
    int size; scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        ptr=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&ptr->data);
        ptr->prev=NULL;
        ptr->next=NULL;
        if(head==NULL)
        {
            head=ptr;
            tail=ptr;
        }
        else
        {
            tail->next=ptr;
            ptr->prev=tail;
            tail=ptr;
        }
    }
    struct node*temp;
    temp=tail;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->prev;
    }
}
