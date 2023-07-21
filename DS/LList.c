#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*ptr,*head,*temp;

int main()
{
    for(int i=0;i<5;i++)
    {
        ptr=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&ptr->data);
        ptr->next=NULL;
        if(head==NULL)
        {
            head=ptr;
            temp=ptr;
        }
        else{
            temp->next=ptr;
            temp=ptr;
        }
    }
    temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    struct node *lastNode = temp->next;
    temp->next = NULL;
    lastNode->next = head;
    head = lastNode;

    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
