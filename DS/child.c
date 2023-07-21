#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*prev;
    struct node*child;
    struct node*next;
}*ptr,*head1,*head2,*head3,*tail,*temp;
struct node* create(int arr[],int size)
{
   struct node*top=NULL;
   for(int i=0;i<size;i++)
   {
       ptr=(struct node*)malloc(sizeof(struct node));
       ptr->data=arr[i];
       ptr->prev=NULL;
       ptr->child=NULL;
       ptr->next=NULL;
       if(top==NULL)
       {
           top=ptr;
           temp=ptr;
       }
       else
       {
           temp->next=ptr;
           ptr->prev=temp;
           temp=ptr;
       }
   }
   return top;
}
struct node* flattenList(struct node*head)
{
    struct node*current=head;
    struct node*tail=head;
    while(current)
    {
        struct node*child=current->child;
        struct node*nextnode=current->next;
        if(child)
        {
            struct node*tail_child=flattenList(child);
            tail_child->next=nextnode;
            if(nextnode)
            {
                nextnode->prev=tail_child;
            }
            current->next=child;
            child->prev=current;
            current->child=NULL;
        }
        else
        {
            current=nextnode;
            if(current)
            {
                tail=current;
            }
        }
    }
    return tail;
}
int main()
{
    int arr1[]={1,2,3,4,5,6};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={7,8,9,10};
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    int arr3[]={11,12};
    int size3=sizeof(arr3)/sizeof(arr3[0]);
    head1=create(arr1,size1);
    head2=create(arr2,size2);
    head3=create(arr3,size3);
    head1->next->next->child=head2;
    head2->next->child=head3;
    flattenList(head1);
    temp=head1;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
