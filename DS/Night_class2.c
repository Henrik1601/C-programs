#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
}*first,*head=NULL,*second,*h2=NULL;
int main()
{
    for(int i=0;i<3;i++)
    {
        first=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&first->data);
        first->next=NULL;
        if(head==NULL)
        {
            head=first;
        }
        else
        {
            first->next=head;
            head=first;
        }
    }
    struct node*temp=head;
    int num=0;
    while(temp!=NULL)
    {
        num=num*10+temp->data;
        temp=temp->next;
    }
    for(int i=0;i<2;i++)
    {
        second=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&second->data);
        second->next=NULL;
        if(h2==NULL)
        {
            h2=second;
        }
        else
        {
            second->next=h2;
            h2=second;
        }
    }
    struct node*temp1=h2;
    int num2=0;
    while(temp1!=NULL)
    {
        num2=num2*10+temp1->data;
        temp1=temp1->next;
    }
    printf("%d",num-num2);
}
