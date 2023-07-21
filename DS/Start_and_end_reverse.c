#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
}*ptr,*head,*tail,*temp,*newnode,*h1,*t1,*h2,*t2,*h3,*t3;
int main()
{
    int size; scanf("%d",&size);
    int start; scanf("%d",&start); int end; scanf("%d",&end);
    int count=1;
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
    tail=NULL;
    while(temp!=NULL)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=temp->data;
        newnode->next=NULL;
        if(count>=start && count<=end)
        {
            if(h2==NULL)
            {
                h2=newnode;
                t2=newnode;
            }
            else
            {
                newnode->next=h2;
                h2=newnode;
            }
        }
        else if(count<start)
        {
            if(h1==NULL)
            {
                h1=newnode;
                t1=newnode;
            }
            else
            {
                t1->next=newnode;
                t1=newnode;
            }
        }
        else if(count>end)
        {
            if(h3==NULL)
            {
                h3=newnode;
                t3=newnode;
            }
            else
            {
                t3->next=newnode;
                t3=newnode;
            }

        }
        count++;
        temp=temp->next;
    }
    t1->next=h2;
    t2->next=h3;
    temp=h1;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
