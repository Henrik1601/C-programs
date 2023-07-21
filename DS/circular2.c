#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
}*ptr,*head,*tail,*temp,*h1,*h2;
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
    tail->next=head;
    int mid;
    if(size%2!=0)
    {
        mid=size/2+1;
    }
    else
    {
        mid=size/2;
    }
    temp=head;
    int count=1;
    tail=NULL;
    while(temp)
    {
        if(h1==NULL)
        {
            h1=temp;
            tail=temp;
        }
        else
        {
            tail->next=temp;
            tail=temp;
        }
        if(count==mid)
        {
            break;
        }
        count++;
        temp=temp->next;
    }
    h2=tail->next;
    tail->next=NULL;
    temp=h1;
    printf("First List: ");
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    temp=h2;
    printf("\nSecond List: ");
    while(temp!=head)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
