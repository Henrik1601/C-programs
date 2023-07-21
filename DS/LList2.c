#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*ptr,*head,*temp;

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
            temp=ptr;
        }
        else
        {
            temp->next=ptr;
            temp=ptr;
        }
    }
    struct node* current = head;
    struct node* nextNode = NULL;
    int count=1;
    if(head->next!=NULL)
    {
        nextNode = head->next;
        count++;
    }
    while(nextNode!=NULL)
    {
        if(count%2==0)
        {
            nextNode=nextNode->next;
            count++;
        }
        else
        {
            current->next = nextNode;
            current = current->next;
            nextNode=nextNode->next;
            count++;
        }
    }
    if(count%2!=0)
    {
        current->next=NULL;
    }

    temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }

}
