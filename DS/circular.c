#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
}*ptr,*head=NULL,*tail;
void insertonfront(struct node*ptr)
{
    int data; scanf("%d",&data);
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=head;
    head=temp;
    struct node*traversal=head;
    do
    {
        printf("%d ",traversal->data);
        traversal=traversal->next;
    }while(traversal!=head);
}
int main()
{

    for(int i=0;i<5;i++)
    {
        ptr=(struct node*)malloc(sizeof(struct node));
        int data; scanf("%d",&data);
        ptr->data=data;
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
             tail->next=head;
        }

    }
    struct node*temp=head;

    while(temp->next!=head)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
    insertonfront(head);
}
