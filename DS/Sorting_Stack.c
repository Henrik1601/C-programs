#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
}*ptr,*head1,*head2,*temp,*newnode;
int main()
{
    int size; scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head1==NULL)
        {
            head1=newnode;
        }
        else
        {
            newnode->next=head1;
            head1=newnode;
        }
    }
    temp=head1;
    while(temp!=NULL)
    {
        struct node*temp1=temp->next;
        while(temp1!=NULL)
        {
            if(temp->data>temp1->data)
            {
                int a=temp->data;
                temp->data=temp1->data;
                temp1->data=a;
            }
            temp1=temp1->next;
        }
        temp=temp->next;
    }
    temp=head1;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
