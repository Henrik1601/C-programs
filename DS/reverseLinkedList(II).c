#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
}*ptr,*head=NULL,*tail;
void reverseList(struct node*head,int left,int right)
{
    struct node*temp=head;
    int count=0;
    while(temp!=NULL)
    {
       count++;
       if(count==left)
       {
           struct node*newnode=temp->next;
           int innercount=count;
           while(newnode!=NULL)
           {
               innercount++;
               if(innercount==right)
               {
                   int a=temp->data;
                   temp->data=newnode->data;
                   newnode->data=a;
                   break;
               }
               newnode=newnode->next;
           }
       }
       temp=temp->next;
    }
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
}
int main()
{
    int size; scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        ptr=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&ptr->data);
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
    tail->next=NULL;
    reverseList(head,2,4);
}
