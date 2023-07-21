#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
}*ptr,*head;
void insert(int val)
{
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        ptr->data=val;
        ptr->next=NULL;
        head=ptr;
    }
    else
    {
       ptr->data=val;
       ptr->next=head;
       head=ptr;
    }
}
void display(struct node*temp)
{
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int val;
    for(int i=0;i<5;i++)
    {
       printf("Enter the value to insert: ");
       scanf("%d",&val);
       insert(val);
    }
    display(head);
}
