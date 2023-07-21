#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
}*ptr,*head=NULL,*tail=NULL,*temp;
int main()
{
    for(int i=0;i<5;i++)
    {
        ptr=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&ptr->data);
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
    temp=head; int count=0,pos=2;;
    while(temp!=NULL)
    {

    }
}
