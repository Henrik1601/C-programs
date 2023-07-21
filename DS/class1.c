#include <stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node*next;
}*ptr,*head,*head1,*newnode;
void display(struct node*temp)
{
    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
}
void evaluate(struct node*temp)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    while(temp!=NULL)
    {
        if(temp->data%2==0)
        {
            if(newnode==NULL)
            {
                newnode->data=temp->data;
                newnode->next=NULL;
                head1=newnode;
            }
            else
            {
                newnode->data=temp->data;
                newnode->next=head1;
                head1=newnode;
            }
        }
        temp=temp->next;
    }
    display(head1);
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
int main(){
    for(int i=0;i<5;i++)
    {
        int data; scanf("%d",&data);
        insert(data);
    }
   evaluate(ptr);
}
