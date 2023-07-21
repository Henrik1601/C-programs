#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
}*ptr,*head,*tail,*temp;

int main()
{
    for(int i=0;i<5;i++){
        ptr=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&ptr->data);
        ptr->next=NULL;
        if(head==NULL){
            head=ptr;
            tail=ptr;
        }
        else{
            tail->next=ptr;
            tail=ptr;
        }
    }
    temp=head;
    printf("Enter the position ");
    int pos; scanf("%d",&pos);
    struct node*newnode;
    printf("Enter the value ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        if(count+1==pos)
        {
            newnode->next=temp->next;
            temp->next=newnode;
        }
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
