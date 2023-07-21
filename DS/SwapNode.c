#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
}*ptr,*head,*temp;
struct node* swapNode(struct node* head)
{
    //need to complete
};
int main()
{
    for(int i=0;i<5;i++)
    {
        ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=i+1;
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
    swapNode(head);
}
