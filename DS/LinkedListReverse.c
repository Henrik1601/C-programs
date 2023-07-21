#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
}*ptr,*head=NULL,*temp,*newnode=NULL;
int main()
{
    for(int i=0;i<5;i++)
    {
        ptr=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&ptr->data); ptr->next=NULL;
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
    temp=head;
    while(temp!=NULL)
    {
        if(newnode==NULL)
        {
            newnode=temp;
            newnode->next=NULL;
        }
        else
        {
            temp->next=newnode;
            newnode=temp;
        }
        temp=temp->next;
    }
    while(newnode!=NULL)
    {
        printf("%d",newnode->data);
        newnode=newnode->next;
    }

}
