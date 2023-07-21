#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
}*ptr,*head,*tail,*temp;
int main()
{
    int size;
    scanf("%d",&size);
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
    int count=0;
    while(temp->next!=NULL)
    {
        struct node*temp1=temp->next;
        while(temp1!=NULL)
        {
            if(temp->data >temp1->data){
                count++;
            }
            temp1=temp1->next;
        }
        temp=temp->next;
    }
    printf("%d",count);
}
