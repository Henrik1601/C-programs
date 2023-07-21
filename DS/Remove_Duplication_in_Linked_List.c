#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
}*ptr,*head,*tail,*temp;

int main()
{
    int size; scanf("%d",&size);
    for(int i=0;i<size;i++)
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
    temp=head;
    while(temp)
    {
        struct node*temp1=temp->next;
        while(temp1)
        {
            if(temp->data==temp1->data)
            {
                temp->next=temp1->next;
                temp1=temp->next;
                if(temp->data!=temp1->data)
                {
                    temp=temp->next;
                    temp1=temp1->next;
                }
            }
            else
            {
                temp1=temp1->next;
            }
        }
        temp=temp->next;
    }
    temp=head;
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
