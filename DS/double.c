#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*prev;
    struct node*next;
}*ptr,*head=NULL,*tail=NULL,*temp;
int main()
{
    for(int i=0;i<4;i++){
        ptr=(struct node*)malloc (sizeof(struct node));
        scanf("%d",&ptr->data);
        ptr->prev=NULL;
        ptr->next=NULL;
        if(head==NULL)
        {
            head=ptr;
            tail=ptr;
            temp=ptr;
        }
        else
        {
            temp->next=ptr;
            ptr->prev=temp;
            tail=ptr;
            temp=ptr;
        }
    }
    temp=tail;
    while(temp!=NULL)
    {
        printf("%d-> ",temp->data);
        temp=temp->prev;
    }
}
