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
    for(int i=0;i<5;i++)
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
    printf("Enter the position to delete the value: ");
    int pos; scanf("%d",&pos);

    struct node*temp=head;
    int traverseCount=0;

    while(temp!=NULL)
    {
        traverseCount++;
        if(traverseCount+1==pos)
        {
            temp->next=temp->next->next;
            break;
        }
        temp=temp->next;
    }

    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
