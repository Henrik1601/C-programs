#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
}*ptr,*head,*tail,*temp,*temp1;
int main()
{
    int size; scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=i+1;
        ptr->next=NULL;
        if(head==NULL)
        {
            head=ptr;
            tail=ptr;
        }
        else
        {
            tail->next=ptr;
            tail=ptr;
        }
    }
    tail->next=head;
    temp=head; int count=1;
    while(temp->next!=temp)
    {
        temp->next=temp->next->next;
        temp=temp->next;
    }
    printf("%d ",temp->data);
}
