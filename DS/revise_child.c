#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*child;
    struct node*prev;
    struct node*next;
}*ptr,*head1,*head2,*head3,*temp;
struct node* flatten(struct node*head)
{
    struct node*current=head;
    struct node*tail=head;
    while(current){
        struct node*child=current->child;
        struct node*nextnode=current->next;
        if(child)
        {
            struct node*tail_child=flatten(child);
            tail_child->next=nextnode;
            if(nextnode)
            {
                nextnode->prev=tail_child;
            }
            current->next=child;
            child->prev=current;
            current->child=NULL;
            current=tail;
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
struct node* LinkedList(int arr[],int size)
{
    struct node*top=NULL;
    for(int i=0;i<size;i++)
    {
        ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=arr[i];
        ptr->child=NULL;
        ptr->prev=NULL;
        ptr->next=NULL;
        if(top==NULL)
        {
            top=ptr;
            temp=ptr;
        }
        else
        {
            temp->next=ptr;
            temp=ptr;
        }
    }
    return top;
}
int main()
{
    printf("Enter the size of array1: ");
    int size1; scanf("%d",&size1);
    printf("Enter the size of array2: ");
    int size2; scanf("%d",&size2);
    printf("Enter the size of array3: ");
    int size3; scanf("%d",&size3);
    int arr1[size1],arr2[size2],arr3[size3];
    printf("Enter the array1 elements\n");
    for(int i=0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the array2 elements\n");
    for(int i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("Enter the array3 elements\n");
    for(int i=0;i<size3;i++)
    {
        scanf("%d",&arr3[i]);
    }
    head1=LinkedList(arr1,size1);
    head2=LinkedList(arr2,size2);
    head3=LinkedList(arr3,size3);
    head1->next->next->child=head2;
    head2->next->child=head3;
    flatten(head1);
    temp=head1;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
