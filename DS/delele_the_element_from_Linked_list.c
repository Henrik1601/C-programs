#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
}*ptr,*head,*temp,*newnode,*h1,*t1;
int main()
{
    int size; scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        ptr=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&ptr->data);
        ptr->next=NULL;
        if(head==NULL)
        {
            head=ptr;
            temp=ptr;
        }
        else
        {
            temp->next=ptr;
            temp=ptr;
        }
    }
    int key; scanf("%d",&key);
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data!=key)
        {
            newnode=(struct node*)malloc(sizeof(struct node));
            newnode->data=temp->data;
            newnode->next=NULL;
            if(h1==NULL)
            {
                h1=newnode;
                t1=newnode;
            }
            else
            {
                t1->next=newnode;
                t1=newnode;
            }
        }
        temp=temp->next;
    }
    temp=h1;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
