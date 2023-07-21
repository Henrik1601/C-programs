#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
}*ptr,*head;
void display(struct node*temp)
{
    while(temp!=NULL)
    {
        printf("%d --> ",temp->data);
        temp=temp->next;
    }
}
void normalinsert(int val)
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
void insertatend(int val)
{
    struct node*temp;
    temp->data=val;
    temp->next=NULL;
    while(ptr!=NULL)
    {
        if(ptr->next==NULL)
        {
            temp->next=ptr->next;
            ptr->next=temp;
        }
        ptr=ptr->next;
    }
}
int main()
{
    int val,val1;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&val);
        normalinsert(val);
    }
    scanf("%d",&val1);
    insertatend(val1);
    display(ptr);
}
