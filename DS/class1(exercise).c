#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*ptr,*head,*head1;
void sort()
{
    struct node*temp=head;
}
void display(struct node*temp)
{
    struct node*newnode=temp->next;
    newnode->next=temp->next->next;
    head1=newnode;
    while(newnode!=NULL)
    {
        printf("%d->",newnode->data);
        newnode=newnode->next;
    }
    struct node*first=head1;
    while(first!=NULL)
    {
        struct node*second=first->next;
        while(second!=NULL)
        {
            if(first->data>second->data)
            {
               int item=first->data;
               first->data=second->data;
               second->data=item;
            }
            second=second->next;
        }
        first=first->next;
    }
    printf("\n");
    while(first!=NULL)
    {
        printf("%d-> ",first->data);
        first=first->next;
    }
}
void insert(int data)
{
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        ptr->data=data;
        ptr->next=NULL;
        head=ptr;
    }
    else
    {
        ptr->data=data;
        ptr->next=head;
        head=ptr;
    }
}
int main()
{
    for(int i=0;i<5;i++)
    {
        int data; scanf("%d",&data);
        insert(data);
    }
    display(ptr);
}
