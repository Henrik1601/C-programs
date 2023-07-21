#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
}*ptr,*head1,*head2,*head3,*head,*temp;
struct node* form(int size)
{
    head=NULL;
    for(int i=0;i<size;i++)
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
    return head;
}
struct node* join(struct node*head1,struct node*head2,struct node*head3)
{
    temp=head1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }temp->next=head2;
    temp=head2;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }temp->next=head3;
    return head1;
}
struct node* sort(struct node*head)
{
   temp=head;
   while(temp!=NULL)
   {
       struct node*temp1=temp->next;
       while(temp1!=NULL)
       {
           if(temp->data>temp1->data)
           {
               int a=temp->data;
               temp->data=temp1->data;
               temp1->data=a;
           }
           temp1=temp1->next;
       }
       temp=temp->next;
   }
   return head;
}
int main()
{
    int size1,size2,size3;
    scanf("%d %d %d",&size1,&size2,&size3);
    head1=form(size1);
    head2=form(size2);
    head3=form(size3);
    head1=join(head1,head2,head3);
    temp=head1;
    head1=sort(head1);
    temp=head1;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
